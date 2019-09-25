#include<stdio.h>
#include<stdlib.h>

int main()
{
        int i,j,k,p,no,l=1;
        printf("enter d no lines u want to print:\n");
        scanf("%d",&no);
        for(p=1;p<=no;p++)
        {
                for(i=1;i<15-p;i++)
                {
			printf("  ");
                }
                for(k=l;k<p+l;k++)
                {
                        printf("%d",k);
			printf("   ");	
                }
		l=k;
                for(j=15-p;j>=1;j--)
                {
			printf("  ");
                }
                printf("\n");
        }
}

