#include<stdio.h>
#include<stdlib.h>

void search(int *);

int main()
{
	int a[5]={};
	int x;
	for(int i=0;i<5;i++)
	{
		printf("enter d no:\n");
		scanf(" %d",&x);
		a[i]=x;
	}
	search(a);
}

void search(int *b)
{
	int c,i;
	char node;
	printf("enter d no to search:\n");
	scanf("%d",&c);

	for(i=0;i<5;i++)
	{
		*b=*(b+i);
		if(*b==c)
		{
			printf("yes %d is a member of the array\n",c);
			printf("want to check more(y/n):\n");
			scanf(" %c",&node);
			if(node=='y'||node=='Y')
				{
					search(b);
				}
			if(node=='n')
				{	
					printf("thank u\n");
				}
			return;
		}
	}
	if(i==5)
	{
		printf("not a member\n");
	}
}
