#include <stdio.h>
#include "termio.h"

void clearScreen() {
  printf("\033[2J");
  fflush(stdout);
}

void printXY(int x, int y, char *letter, int foreColor, int backColor, int bold) {
  // Calculate background color
  char *isBackBright;

  if(backColor > 7) {
    isBackBright = "0;";
  } else {
    isBackBright = "";
  }

  printf("\033[%d;%dH\e[%d;%dm\e[%s%dm%s\e[0m\e[40m", y + 1, x + 1, bold, foreColor + 30, isBackBright, backColor + 40, letter);
  fflush(stdout);
}

void __testTermIo() {
  clearScreen();
  printXY(0, 0, "---------------------------------------------", RED, BLACK, NO_BOLD);
  printXY(0, 1, "               GLORIOUS TESTING              ", BLUE, GREEN, BOLD);
  printXY(0, 2, "---------------------------------------------", RED, BLACK, NO_BOLD);
  printXY(5, 0, "-", YELLOW, CYAN, NO_BOLD);
  printXY(0, 3, "", BLACK, BLACK, NO_BOLD);
}