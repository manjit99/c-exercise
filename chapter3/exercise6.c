#include<stdio.h>
int main()
{
	int dec,oct=0,rem=0,k=1;
	printf("enter the decimal no:\n");
	scanf("%d",&dec);
	
	for(;dec!=0;)
	{
		rem=dec%8;
		oct=oct+rem*k;
		k=k*10;
		dec=dec/8;
	}
	printf("the octal no is %d\n",oct);
}
