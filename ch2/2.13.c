#include <stdio.h>
#include "./2.13.h"

int bool_or(int x, int y) {
  int tmp = bis(x, y);
  int result = bit(tmp, x);
  return result;
}

int bool_xor(int x, int y) {
}


int main() {
  return 0;
}

