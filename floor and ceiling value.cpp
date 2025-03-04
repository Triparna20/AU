#include<stdio.h>
#include<math.h>
int main(){
	double num1,num2,num3;
	printf("enter three numbers:");
	scanf("%lf %lf %lf",&num1,&num2,&num3);
	printf("\nNumber:%.2lf->Floor:%.2lf,Ceiling:%.2lf",num1,floor(num1),ceil(num1));
	printf("\nNumber:%.2lf->Floor:%.2lf,Ceiling:%.2lf",num2,floor(num2),ceil(num2));
	printf("\nNumber:%.2lf->Floor:%.2lf,Ceiling:%.2lf",num3,floor(num3),ceil(num3));
	return 0 ;
}


