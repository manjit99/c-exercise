#include<stdio.h>
#include<stdlib.h>

void swap(int *,int *,int *,int,int);

int main()
{
	int ar[10]={21,13,9,8,1,16,20,24,10,6};
	int even[10]={};
	int odd[10]={};
	int x,y,count=0,od_count=0;
	
	x=sizeof(ar)/sizeof(int);

	printf("original array is:\n");

	for(int r=0;r<x;r++)
	{
		printf("%d ",ar[r]);
	}

	printf("\n");

	for(y=0;y<x;y++)
	{
		if(ar[y]%2==0)
		{
			count=count+1;
			even[count-1]=y;
		}
	}

	for(int p=0;p<x;p++)
	{
		if(ar[p]%2!=0)
		{
			od_count=od_count+1;
			odd[od_count-1]=p;
		}
	}
	
	printf("the even positions are:\n");
	for(int z=0;z<count;z++)
	{
		int v;
		v=even[z];
		printf("%d is the position and value is:%d\n",even[z],ar[v]);

	}
	
	printf("\n");
	
	printf("the odd positions are:\n");
	 for(int a=0;a<od_count;a++)
        {
		int y=odd[a];
                printf("%d is d position and value is:%d\n",odd[a],ar[y]);
        }

	printf("\n");

	swap(ar,even,odd,od_count,count);

	printf("after swapping:\n");

	for(int d=0;d<x;d++)
	{
		printf("%d ",ar[d]);
	}

	printf("\n");

}

void swap(int *p,int *e,int *o,int od_count,int count)
{
	int i=0,y=0,even,odd,temp,temp1,sw=0;
	while(i<count)
	{
		
		even=*(e+i);

		for(;y<od_count;)
		{
			odd=*(o+y);
			temp1=*(p+odd);
			temp=*(p+even);
			*(p+even)=*(p+odd);
			*(p+odd)=temp;
			sw=sw+1;
			printf("just swapped %d with %d\n",temp,temp1);
			break;
		}
		y++;
		i++;
	}

	printf("total no of swapping:%d\n",sw);

}
