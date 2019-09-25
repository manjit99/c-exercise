#include<stdio.h>
#include<stdlib.h>
int main()
{
	int x,y,z,p,q,added_result_value;
	for(x=2;x<500;x++)
	{
		y=x%10;
		z=x/10;
		p=z%10;
		q=z/10;
		added_result_value=y*y*y+p*p*p+q*q*q;
		if(x==added_result_value)
		{
			printf("%d is a armstrong number\n",x);
		}
	}
}
