#include<stdio.h>
int main()
{
	int a,b,tem;
	printf("Enter first number");
	scanf("%d",&a);
	printf("Enter second number");
	scanf("%d",&b);
	printf("Before swapping\n first number=%d\n second number=%d,a,b");
	int temp=a;
	a=b;
	b=temp;
	printf("\n After swapping\n first number =%d\n second number=%d",a,b);
	return 0;
}
	

