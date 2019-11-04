#include<stdio.h>

int power()
{
	int pow=1;
	int a,b;
	printf("enter the value of a and b\n");
	scanf("%d %d",&a,&b);
	if(a==0){
		printf("base cant be zero\n");
		power();
	}
	else if(b==0)
		printf("result is 1\n");
	else
		{
			for(;b!=0;b--)
			{
				pow=pow*a;
			}
		printf("the power value is=%d\n",pow);
		}
}
int main()
{
	int x;
	x=power();
}
