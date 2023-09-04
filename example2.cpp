#include <stdio.h>
#include <stdlib.h>

void increment_number(int *number)
{
  *number = *number + 1;
}

int main()
{
  int number;
  number = 10;
  increment_number(&number);
  printf("Number: %d\n", number);
  return 0;
}