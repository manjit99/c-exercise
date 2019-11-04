#include<stdio.h>
#include<stdlib.h>

int binary(int x)
{
	int mod,div;
	if(x!=0)
	{
		mod=x%2;
		div=x/2;
		x=div;
		binary(x);
		printf("%d",mod);
	}
	printf("\n");
}

int main()
{
	int z;
	printf("enter d no:\n");
	scanf("%d",&z);
	binary(z);
}
