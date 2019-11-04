#include<stdio.h>
#include<stdlib.h>

void pos_neg(int *p)
{
	int count=0,neg_count=0,l,z;
	int b[5]={};
	int neg[5]={};
	for(int i=0;i<5;i++)
	{
		*p=*(p+i);
		if(*p>=0)
			{
				count=count+1;
				z=count-1;
				b[z]=*p;
			}
		else
		{
			neg_count=neg_count+1;
			l=neg_count-1;
			neg[l]=*p;
		}
	}
	printf("total no of positive numbers is %d\n",count);
	printf("total negative numbers=%d\n",neg_count);
	for(int c=0;c<count;c++)
	{
		printf("%d th positive no is:%d\n",c,b[c]);
	}
	printf("\n");
	for(int d=0;d<neg_count;d++)
	{
		printf("%d th negative no is:%d\n",d,neg[d]);
	}
}

void odd_even(int *p)
{
	int z,t,count=0,neg=0;
	int x[5]={};
	int w[5]={};
	for(int i=0;i<5;i++)
	{
		*p=*(p+i);
		if(*p%2==0)
		{
			count=count+1;
			z=count-1;
			x[z]=*p;
		}
		else
		{
			neg=neg+1;
			t=neg-1;
			w[t]=*p;
		}
	}
	printf("total no of even numbers:%d\n\n",count);
	printf("total no of odd numbers:%d\n",neg);
	for(int y=0;y<count;y++)
	{
		printf("%d th even no is:%d\n",y,x[y]);
	}
	printf("\n");
	for(int a=0;a<neg;a++)
	{
		printf("%d th odd no is:%d\n",a,w[a]);
	}
}

int main()
{
    int ar[5]={};
    int x;
    for(int i=0;i<5;i++)
    {
        printf("enter d no:\n");
        scanf("%d",&x);
        ar[i]=x;
    }

    pos_neg(ar);
    printf("\n\n");
    odd_even(ar);
} 
