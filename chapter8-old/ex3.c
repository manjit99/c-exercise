//selection sort
#include<stdio.h>

int main()
{
	int a[10]={};
	int x,iter=0;
	int temp1,temp2;
	int count=0;
	int first,second;
	for(int i=0;i<10;i++)
	{
		printf("enter d no:");
		scanf("%d",&x);
		a[i]=x;
	}
	
	while(iter<9)
	{
		for(int z=iter+1;z<10;z++)
		{
			first=a[iter];
			second=a[z];
			printf("befor first is=%d and second is=%d\n",first,second);
			if(first>second)
			{
				temp1=first;
				temp2=second;
				a[iter]=temp2;
				a[z]=temp1;
				printf("after change first is=%d and second is=%d\n",a[iter],a[z]);

			}
			else
			{
				continue;
			}
			printf("VALUE OF ITER I:%d\n",iter);
		}
		for(int p=0;p<10;p++)
        	{
                	printf("%d ",a[p]);
        	}
		printf("\n");

		iter++;
	}
}
