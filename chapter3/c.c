#include<stdio.h>

int main()
{
	int x,p,l;
	for(p=1;p<10;p++)
	{
	for(l=9;l>0;l--);
	{
		printf(" ");
	}
	for(x=1;x<10;x++)
	{
		printf("*");
	}
	printf("\n");
	}
}
