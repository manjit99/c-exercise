#include<stdio.h>
int main()
{
	int x,min,max,i,total_no;
	printf("enter the no of numbers to compare:\n");
	scanf("%d",&total_no);
	printf("enter the first no:\n");
	scanf(" %d",&x);
	max=x;
	min=x;
	for(i=1;i<total_no;i++)
	{
		printf("enter d no:\n");
		scanf("%d",&x);
		if(x>max)
		{
			max=x;
		}
		else if(x<min)
		{
			min=x;
		}	
	}
	printf("the minimum no is:%d\n",min);
	printf("the maximum no is:%d\n",max);

}
