#include <stdio.h>

/*
 * Shows the warning:
 *  main.c:3:28: warning: unknown escape sequence '\c' [-Wunknown-escape-sequence]
 *      3 | int main() { printf("hello,\c world\n"); }
 *        |                            ^~
 *  1 warning generated.
*/
int main() { printf("hello,\c world\n"); }
