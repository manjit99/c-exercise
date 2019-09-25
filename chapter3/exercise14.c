#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i,j,k,p,no,row=0,l=1,u=1;
        printf("enter d no lines u want to print:\n");
        scanf("%d",&no);
        for(p=1;p<=no;p++)
        {
                for(i=1;i<10-p;i++)
                {
                        printf("  ");
                }
                for(k=l;k<=p;k++)
                {
			row=p;
			if(row>=3)
			{
				if(k>1&&k<row)
				{
					printf("%d",k);
					printf("   ");
				}
				else
				{
					 printf("%d",u);
                        		 printf("   ");
				}
				
			}
			else
			{
				 printf("%d",u);
                       		 printf("   ");
		        }
                }
                for(j=10-p;j>=1;j--)
                {
                        printf("  ");
                }
                printf("\n");
        }

}
