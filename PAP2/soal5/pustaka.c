#include "pustaka.h"

void print_diamond(){

    int a, b, c, space = 1;

    printf("Enter number of rows\n");
    scanf("%d", &a);

    space = a-1;

  for (c=1;c<=a;c++)
  {
    for (b=1;b<=space;b++)
      printf(" ");

    space--;

    for (b=1;b<=2*c-1;b++)
        printf("*");

        printf("\n");
  }

  space = 1;

  for (c=1;c<=a-1;c++)
  {
    for (b=1;b<=space;b++)
      printf(" ");

    space++;

    for (b=1;b<=2*(a-c)-1;b++)
      printf("*");

    printf("\n");
  }

}
