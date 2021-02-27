#include <stdio.h>

void inplace_swap(int *x, int *y) {
  *y = *x ^ *y;
  *x = *x ^ *y;
  *y = *x ^ *y;
}

void reverse_arrary(int a[], int cnt) {
  int first, last;
  for (first = 0, last = cnt - 1; first < last; first++,last--)
    inplace_swap(&a[first], &a[last]);
}

void print_array(int a[], int cnt) {
  int loop;
  for (loop = 0; loop < cnt; loop++)
    printf("%d ", a[loop]);
  printf("\n");
}

int main() {
  int a[4] = {1, 2, 3, 4};
  reverse_arrary(a, 4);
  print_array(a, 4);

  int b[5] = {1, 2, 3, 4, 5};
  reverse_arrary(b, 5);
  print_array(b, 5);

  return 0;
}

