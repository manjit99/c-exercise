#include<stdio.h>
#include<stdlib.h>
int prime(int);
int factor()
{
	int x,i,temp;
	printf("enter the no to know its factors\n");
	scanf("%d",&x);
	if(x==0||x==1)
	{
		printf("sorry,enter again\n");
		factor();
	}
	else
	{
		for(i=1;i<=x;i++)
		{
			if(x%i==0)
			{
				temp=i;
				prime(temp);
			}
		}

	}
}
int prime(int x)
{
	int i,mod;
        if(x==0||x==1);
        else
        {
                for(i=2;i<=x/2;i++)
                {
                        mod=x%i;
                        if(mod==0)
                        {
                                break;
                        }
                }
                if(i>x/2)
                {
                        printf("%d is a prime factor\n",x);
                }
        }
}

void main()
{
	char x;
	printf("want to check prime factors(y/n)\n");
	scanf(" %c",&x);
	if(x=='y')
	{
		factor();
		main();
	}
	else;
}
