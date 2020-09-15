#include <stdio.h>

int main() {

  int x = 0x87654321;

  printf("%X\n", x&0xFF);
  printf("%X\n", (x&0xFF)|(~(x|0xFF)));
  printf("%X\n", x&(~0xFF)|0xFF);

  return 0;
}