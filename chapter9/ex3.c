#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main()
{
	char c[10];
	printf("enter the string of numbers:\n");
	scanf("%s",c);

	int x,p,j=0,cint,sum=0;

	x=strlen(c);	

	for(int i=x-1;i>=0;i--)
	{
		p=pow(10,i);

		while(j<x)
		{
			cint=c[j]-'0';	
			p=p*cint;
			sum=sum+p;
			break;
		}
		j++;
	}

	printf("after conversion the number is:%d\n",sum);
}
