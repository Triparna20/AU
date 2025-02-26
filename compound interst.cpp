#include<stdio.h>
#include<math.h>
int main ()
{
	double principal,rate,time,compoundInterest,amount;
	printf("enter principal amount : ");
	scanf("%lf",&principal);
	printf("enter annual interest rate (in parcentage):");
	scanf("lf",&rate);
	printf("enter time (in years):");
	scanf("%lf",&time);
	rate=rate/100;
	amount = principal*pow((1+rate),time);
	compoundInterest = amount-principal;
	printf("total amount (principal+compound interest):.2lf\n",amount);
	return 0;
}
