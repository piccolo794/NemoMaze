/**
 * Simple terminal I/O functions that doesn't require you to understand nCurses :D
 * @author  Patrick Ryan <patrick.ryan@codeotter.com>
 */

#ifndef CODEOTTER_TERMIO_H
#define CODEOTTER_TERMIO_H

static const int NO_BOLD = 0;
static const int BOLD = 1;
static const int BLACK = 0;
static const int RED = 1;
static const int GREEN = 2;
static const int YELLOW = 3;
static const int BLUE = 4;
static const int PURPLE = 5;
static const int CYAN = 6;
static const int WHITE = 7;
static const int BRIGHT_BLACK = 60;
static const int BRIGHT_RED = 61;
static const int BRIGHT_GREEN = 62;
static const int BRIGHT_YELLOW = 63;
static const int BRIGHT_BLUE = 64;
static const int BRIGHT_PURPLE = 65;
static const int BRIGHT_CYAN = 66;
static const int BRIGHT_WHITE = 67;


/**
 * Prints a character at an X and Y location with a foreground color and a background color and bolding
 * @example printXY(5,5, "a", BLUE, WHITE, BOLD);
 * @example printXY(5,5, "a", WHITE, BLACK, NO_BOLD);
 */
void printXY(int x, int y, char *letter, int foreColor, int backColor, int bold);

/**
 * Clears the terminal screen
 * @example clearScreen();
 */
void clearScreen();

/**
 * Resets terminal colors
 * @example resetColors();
 */
void resetColors(int x, int y);

/**
 * Tests if termio works
 * @example __testTermIo();
 */
void __testTermIo();

#endif