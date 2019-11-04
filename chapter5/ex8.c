#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void circular(int x,int y,int z)
{
	x=5,y=8,z=10;
	x=(x>>1)<<2;
	printf("%d\n",x);
}

void main()
{
	int a,b,c;
	circular(a,b,c);
}

