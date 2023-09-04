#include <stdio.h>
// #include <conio.h> // for windows
#include <curses.h> // for macos

void value_exchange(int *ptrx, int *ptry);

int main()
{
  int a, b;

  printf("Enter the first number: ");
  scanf("%d", &a);

  printf("Enter the second number: ");
  scanf("%d", &b);

  printf("You entered the values in the following order: %d e %d\n", a, b);

  value_exchange(&a, &b);

  printf("The values were exchanged: %d e %d\n", a, b);

  getch();
  return 0;
}

void value_exchange(int *ptrx, int *ptry)
{
  int aux;

  aux = *ptrx;
  *ptrx = *ptry;
  *ptry = aux;

  return;
}