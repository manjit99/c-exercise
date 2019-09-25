#include<stdio.h>
int main()
{
	char another;
	int num;
	do
	{
		printf("enter the value of num to have its square:\n");
		scanf("%d",&num);
		printf("the square of %d is %d\n",num,num*num);
		printf("want to enter another no(y/n):\n");
		scanf(" %c",&another);
	}while(another=='y');
}
