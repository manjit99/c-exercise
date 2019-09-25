#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i,j,k,p,no;
	printf("enter d no lines u want to print:\n");
	scanf("%d",&no);
	for(p=0;p<=no;p++)
	{
		for(i='A';i<'H'-p;i++)
		{
			printf("%c ",i);
		}
		for(k=1;k<=p*2-1;k++)
		{
			printf("  ");
		}
		for(j='G'-p;j>='A';j--)
		{
			if(j=='G');
			else
			{
				printf(" %c",j);
			}
		}
		printf("\n");
	}
}

