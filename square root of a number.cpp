#include<math.h>
#include<stdio.h>
int main(){
	double num,result;
	printf("enter a number :");
	scanf("%lf",&num);
	if (num<0){
		printf("error : square root of a negetive number is not defined in real numbers.\n");
	}else{
		result=sqrt(num);
		printf ("the square root of %.2lf is %.2lf\n",num,result);
	}
	return 0;
}
