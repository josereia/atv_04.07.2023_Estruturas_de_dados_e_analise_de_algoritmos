#include <stdio.h>

void exchange(int *a, int *b)
{
  int temp;

  temp = *a;
  *a = *b;
  *b = temp;
}

int main()
{
  int a = 2, b = 3;

  printf("Before exchange: :\na=%d\nb=%d\n", a, b);
  exchange(&a, &b);
  printf("After exchange: :\na=%d\nb=%d\n", a, b);

  return 0;
}