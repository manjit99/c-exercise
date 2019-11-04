#include<stdio.h>

int main()
{
	int x[3][4]={
		1,2,30,4,
		4,50,6,7,
		8,9,10,11
	};
	
	int high=x[0][0];
	for(int i=0;i<3;i++)
	{
		for(int y=0;y<4;y++)
		{	
			if(x[i][y]>high)
			{
				high=x[i][y];
			}
		}
	}
	printf("%d\n",high);
}
