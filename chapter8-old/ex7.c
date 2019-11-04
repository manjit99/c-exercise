//finding the smallest element of an array

#include<stdio.h>

int main()
{
	int iter=0;
	int ar[5]={};
	int x,first,second;
	//printf("this is sorting of an array using insertion sort!\n");
	for(int i=0;i<5;i++)
	{
		printf("enter d no:");
		scanf("%d",&x);
		ar[i]=x;
	}
	
	while(iter<4)
	{
		for(int z=1;z<5;z++)
		{
			for(int c=z-1;c>=0;c--)
			{
				first=ar[z];
				second=ar[c];
				if(first<second)
				{
					ar[z]=second;
					ar[c]=first;
				}
				else
				{
					continue;
				}
			}
		}
		iter++;
	}	
	for(int p=0;p<5;p++)
	{
		if(p==0)
		{
			printf("the smallest element is:%d\n",ar[p]);
			printf("also the sorted array is:\n");
		}
		printf("%d ",ar[p]);
	}
	printf("\n");
}
