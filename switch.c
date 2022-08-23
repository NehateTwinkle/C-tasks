#include<stdio.h>
int main()
{
	int a=54,b=23;
	int sum;
	printf("enter your choice...");
	scanf("%d",&sum);
	//printf("enter two integer value.");
	//scanf("%d%d",&a,&b);
	switch(sum)
	{
		case 1:printf("%d",a+b);
		break;
		case 2:printf("%d",a-b);
		break;
		case 3:printf("%d",a*b);
		break;
		default:printf("invalid choice");
	}
	return 0;
}