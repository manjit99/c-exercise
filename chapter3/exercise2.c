#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int x,y,result;
	printf("enter the value of base:\n");
	scanf("%d",&x);
	printf("enter the value of power:\n");
  scanf("%d",&y);
	if(y==0)
		printf("the result is 1");
	else
	{
		if(x!=0)
		{
			result=pow(x,y);
			printf("the result is:%d\n",result);
		}
		else
			printf("base cant be zero\n");
	}
}
