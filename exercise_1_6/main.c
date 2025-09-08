#include <stdio.h>

/*
 * We can verify that `c = getchar() != EOF` by:
 * - Typing any character but EOF (CTRL+D) will print '0'
 * - Typeing EOF (CTRL+D) will print '1'
 */
int main() {
  int c;

  while ((c = getchar()) != EOF) {
    /* Pressing enter will input a \n, which we will ignore here */
    if (c == '\n') {
      continue;
    }

    printf("0\n");
  }

  printf("1\n");
}
