#include <stdio.h>                                                              
#include <math.h>

void main()
{

int a,b,c;

    printf("\nEnter the value of A\n");
    scanf("%d",&a);
    printf("\nEnter the value of B\n");
    scanf("%d",&b);
    printf("\nBefore swapping\n");
    printf("A:%d\nB:%d",a,b);

c=a;
a=b;
b=c;

    printf("\nAfter swapping\n");
    printf("A:%d\nB:%d",a,b);
    
}