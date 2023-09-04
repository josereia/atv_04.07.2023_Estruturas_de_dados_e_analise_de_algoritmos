#include <stdio.h>
#include <stdlib.h>

void operations(float n1, float n2, float *sum, float *sub, float *div, float *multi)
{
  *sum = n1 + n2;
  *sub = n1 - n2;
  *div = n1 / n2;
  *multi = n1 * n2;
}

int main()
{
  float sum, sub, div, multi;
  float n1 = 2, n2 = 5;

  operations(n1, n2, &sum, &sub, &div, &multi);
  printf("\n%f", sum);
  printf("\n%f", sub);
  printf("\n%f", div);
  printf("\n%f", multi);

  // system("pause"); // uncomment for windows
  return 0;
}