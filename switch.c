#include<stdio.h>
int main()
{
	int a=45,b=23;
	int sum;
	printf("enter your choice... 1+.2-.3*.4/");
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
		case 4:printf("%d",a/b);
		break;
		default:printf("invalid choice");
	}
	return 0;
}