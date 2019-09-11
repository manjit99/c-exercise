#include<stdio.h>
#include<stdlib.h>
int main()
{
	int p,n;
	float r,Si;
	printf("please enter the principal amount=\n");
	scanf("%d",&p);
	printf("enter the number of years=\n");
	scanf("%d",&n);
	printf("enter the rate=\n");
	scanf("%f",&r);
	Si=(p*n*r)/100;
	printf("the simple interest is=%f\n",Si);
}
