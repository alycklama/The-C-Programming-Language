#include <stdio.h>

/* A program to replaces adjacent blanks with a single blank
 *
 * Example:
 * hello       this     is a test
 *
 * Output:
 * hello this is a test
 */
int main() {
  int c, b;
  b = 0;

  while ((c = getchar()) != EOF) {
    if (c == ' ' && b >= 1) {
      continue;
      ++b;
    } else if (c == ' ') {
      ++b;
    } else {
      b = 0;
    }

    putchar(c);
  }
}
