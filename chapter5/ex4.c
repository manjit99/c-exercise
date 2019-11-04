#include<stdio.h>
#include<stdlib.h>

int five()
{
	int i,num,mod,div;
	printf("enter d no:\n");
	scanf("%d",&num);
	if(num>0)
	{
		div=num/10000;
		if(div>=1&&div<10)
		{
			return(num);
		}
		else
		{
			printf("Sorry..not a five digit no\n");
			five();
		}
	}
	else
	{
		printf("less than zero\n");
		five();
	}
}

int add_no_recursion(int z)
{
	int div,i,mod,sum=0;
	for(i=1;i<6;i++)
	{
		mod=z%10;
		sum=sum+mod;
		div=z/10;
		z=div;
	}
	printf("the sum is %d\n",sum);
}
int add_with_recursion(int j)
{
	static int i=0, sum=0;
	int mod,div;
	i++;
	mod=j%10;
	sum=sum+mod;
	div=j/10;
	j=div;
	for(;i<6;)
	{
		add_with_recursion(j);
	}
	return(sum);
}

int main()
{
	int f,z;
	char node;
	f=five();
	add_no_recursion(f);
	printf("do u like to again get d sum result using recursion(y/n):\n");
	scanf(" %c",&node);
	if(node=='y')
	{
		z=add_with_recursion(f);
		printf("d sum using recursion is:%d\n",z);	
	}
	else
	{
		printf("thank u\n");
	}
}
