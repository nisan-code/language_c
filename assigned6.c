#include <stdio.h>
#include <math.h>

void main()
{
  
int a, b, c, x, total;


  printf("\na: ");
  scanf("%d", &a);
  printf("\nb: ");
  scanf("%d", &b);
  printf("\nc: ");
  scanf("%d", &c);
  printf("\nx: ");
  scanf("%d", &x);

total = a*x*x+b*x+c;

  printf("Total= %d\n", total);

}