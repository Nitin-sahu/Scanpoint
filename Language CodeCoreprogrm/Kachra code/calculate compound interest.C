#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	
float p,r,t,ci;
printf("Enter Principle, Rate and Time: ");
scanf("%f%f%f",&p,&r,&t);
ci=p*pow((1+r/100),t);
printf("Bank Loans Compound Interest = %f%",ci);


return 0;
}
