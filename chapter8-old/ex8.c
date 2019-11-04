#include<stdio.h>

void modify(int *p)
{
	int y;
	for(int i=0;i<10;i++)
	{
		y=3*(*(p+i));
		*(p+i)=y;
	}
}

int main()
{
	int ar[10]={};
	int x;

	for(int y=0;y<10;y++)
	{
		printf("enter d no:");
		scanf("%d",&x);
		ar[y]=x;
	}
	modify(ar);

	for(int c=0;c<10;c++)
	{
		printf("%d",ar[c]);
		printf("\n");
	}
}
