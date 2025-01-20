#include <stdio.h>
#include <string.h>

int main() {
  int i;
  char buf2[4];
  char buf1[6];
  
  for (i = 0; i < 10; i++) {
    buf1[i] = 'A';
  }

  /**
  * memory layout: 0 | 1 | 2 | 3 | 4 | 5
  * buf1: | A | A | A | A | A | A
  * memory layout: 6 | 7 | 8 | 9
  * buf2: | A | A | A | A
  **/

  printf("[AFTER] buf1 is at %p and contains \'%s\'\n", buf1, buf1);
  printf("[AFTER] buf2 is at %p and contains \'%s\'\n", buf2, buf2);

  return 0;
}