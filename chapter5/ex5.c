#include<stdio.h>
#include<stdlib.h>

int prime_fac(int);

int factor(int x)
{
	int i=1,mod;
	for(i=1;i<=x;i++)
	{
		mod=x%i;
		if(mod==0)
		{
			prime_fac(i);
		}
	}
}

int prime_fac(int f)
{
	int i=2,mod;
	if(f==1);
	else
	{
		for(;i<=f/2;i++)
		{
			mod=f%i;
			if(mod==0)
				break;
		}	
		if(i>f/2)
		{
			printf("prime factor's are:%d\n",f);
		}
	}
}

int prime_fac_with_recursion(int *j)
{
	int *i=1,mod;
	if(*j==1);
	else
		{
			*i++;
			if(*i++>*j/2)
			{
				return(*j);
			}
			mod=*j%*i;
			if(mod==0);
			prime_fac_with_recursion(*j);

		}	
}

int main()
{
	int z,c;
	char node;
	printf("enter d no\n");
	scanf("%d",&z);
	factor(z);
	printf("want to again get d prime factors with recursion(y/n)\n");
        scanf(" %c",&node);
        if(node=='y')
               printf("bal");
        else
               printf("j");

}
