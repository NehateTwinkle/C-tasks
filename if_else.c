#include<stdio.h>
int main()
{
	float num1,num2;
	printf("enter two integer number.");
	scanf("%f %f",&num1,&num2);
	printf("you have entered num1=%f and num2=%f",num1,num2);
	
	if(num1>num2)
	{
	  printf("max num =%f",num1);
    }
    else
    printf("max num =%f",num2);
	return 0;
	
}