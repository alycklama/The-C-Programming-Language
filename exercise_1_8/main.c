#include <stdio.h>

/* A program to count blanks, tabs and newlines:
 *
 * Example:
 * this is a test
 * with    one or  two tabs
 * and a bunch
 * of
 * newlines
 * <CTRL+D>
 *
 * Output:
 * blanks:        7
 * tabs:          2
 * newlines:      5
 * */
int main() {
  int c, b, t, n;
  b = t = n = 0;

  while ((c = getchar()) != EOF) {
    if (c == '\n')
      ++n;
    else if (c == '\t')
      ++t;
    else if (c == ' ')
      ++b;
  }

  printf("blanks:   %6d\n", b);
  printf("tabs:     %6d\n", t);
  printf("newlines: %6d\n", n);
}
