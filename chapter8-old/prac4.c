#include<stdio.h>
#include<stdlib.h>
int main()
{
	int data[3][2]={};

	for(int i=0;i<=2;i++)
	{
		printf("enter the roll no:\n");
		scanf("%d",&data[i][0]);
		printf("enter d mark\n");
		scanf(" %d",&data[i][1]);
	}

	for(int z=0;z<=2;z++)
	{
		printf("the roll no=%d, and mark is=%d\n",data[z][0],data[z][1]);
	}
}
