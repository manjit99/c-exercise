#include<stdio.h>
void reverse(int *);

int main()
{
	int ar[5]={};
	int x,i;
	for(i=0;i<5;i++)
	{
		printf("enter d no:");
		scanf("%d",&x);
		ar[i]=x;
	}
	reverse(ar);

}

void reverse(int *p)
{
	int x,t,y;
	int br[5]={};
	for(x=4;x>=0;x--)
	{
			br[4-x]=*(p+x);
	}
	
	printf("now the reversed array is:\n");
	for(t=0;t<5;t++)
	{
		printf("%d\n",br[t]);
	}
}
