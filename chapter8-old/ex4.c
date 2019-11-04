//bubble sort

#include<stdio.h>

int main()
{
	int x,iter=0;
	int ar[5]={};
	int first,second;
	for(int i=0;i<5;i++)
	{
		printf("enter d number:");
		scanf("%d",&x);
		ar[i]=x;		
	}

	while(iter<4)
	{
		for(int z=0;z<4;z++)
		{
			first=ar[z];
			second=ar[z+1];
			if(first>second)
			{
				ar[z]=second;
				ar[z+1]=first;
			}
			else
			{
				continue;
			}
		}
		iter++;
	}
	printf("sorted array is:\n");

	for(int s=0;s<5;s++)
	{
		printf("%d ",ar[s]);
	}
	printf("\n");
}
