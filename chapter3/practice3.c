#include<stdio.h>
int main()
{
	int num;
	char another='y';
	for(;another=='y';)
	{
		printf("want to know the square of a number:\n");
		scanf("%d",&num);
		printf("the square of %d is %d\n",num,num*num);
		printf("enter y or n if u want to check another one:\n");
		scanf(" %c",&another);
	}
}
