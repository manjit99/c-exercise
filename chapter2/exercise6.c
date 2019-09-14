#include<stdio.h>
int main(){
	int num;
	printf("enter d number:\n");
	scanf("%d",&num);
	if(num>=0)
		{
		printf("the absolute value is:%d\n",num);
		}
	else
		{
			num=(-1)*num;
			printf("the absolute value is:%d\n",num);
		}
}
