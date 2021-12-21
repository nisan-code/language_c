#include <stdio.h>                                                              
#include <math.h>

void main()
{
    
int a,b;

    printf("\nEnter the value of A\n");
    scanf("%d",&a);
    printf("\nEnter the value of B\n");
    scanf("%d",&b);
    printf("\nBefore swapping\n");
    printf("A:%d\nB:%d",a,b);

a=b+a;
b=a-b;
a=a-b;

    printf("\nAfter swapping\n");
    printf("A:%d\nB:%d",a,b);

}