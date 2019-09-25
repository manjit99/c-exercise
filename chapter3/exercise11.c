#include<stdio.h>
#include<math.h>

int main()
{
	int i,j,k,comb;
	for(i=1;i<4;i++)
	{
		for(j=1;j<4;j++)
		{
			for(k=1;k<4;k++)
			{
				comb=100*i+10*j+k;
			}
			printf("combos are:%d\n",comb);
		}
	}
}
