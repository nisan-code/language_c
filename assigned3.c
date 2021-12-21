#include <stdio.h>
#include <math.h>

void main()
{

int principal, rate, time, sinterest, total;

    printf("\nPrincipal: ");
    scanf("%d", &principal);
    printf("\nRate: ");
    scanf("%d", &rate);
    printf("\ntime: ");
    scanf("%d", &time);

sinterest = (principal * rate * time )/ 100.0;

    printf("\nCompound Interest= %d\n", sinterest);

total = sinterest + principal;

    printf("\nTotal= %d\n",total);
    
}