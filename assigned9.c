#include <stdio.h>                                                              
#include <math.h>

void main()
{

 int p,t,r,si,ci;


  printf("\np: ");
  scanf("%d", &p);
  printf("\nt: ");
  scanf("%d", &t);
  printf("\nr: ");
  scanf("%d", &r);

 si=p*t*r/100;
 ci=p*(pow(1+r/100,t)-p);

 printf("simple interest =%d \n",si);
 printf("compound interest=%d \n",ci);
 
}