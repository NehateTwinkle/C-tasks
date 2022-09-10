#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		{
			printf("greater number is %d",a);
		}
		else
		{
			printf("greater number is %d",c);
		}
	}
	else if(b>c)
	{
		printf("greater number is %d",b);
	}
	else
	{
		printf("greater number is %d",c);
	}
	return 0;
}