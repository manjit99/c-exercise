//transpose of a matrix

#include<stdio.h>

int main()
{
	int ar[4][4]={};
	int x;

	for(int row=0;row<4;row++)
	{
		for(int col=0;col<4;col++)
		{
			printf("enter d element:");
			scanf("%d",&x);
			ar[row][col]=x;
		}
	}
	
	printf("the 4*4 array u have entered is:\n");

	for(int row=0;row<4;row++)
        {
                for(int col=0;col<4;col++)
                {
                        printf("%d ",ar[row][col]);
                }
		printf("\n");
        }

	printf("now the transpose of the matrix is\n");
	
	transpose(ar,4,4);

}

void transpose(int *p,int row,int col)
{
	int temp,temp2,new_row,new_col;
	int tran[4][4]={};
	
	for(int i=0;i<row;i++)
	{
		for(int y=0;y<col;y++)
		{
			new_row=y;
			new_col=i;
			temp=*(p+i*col+y);
			tran[new_row][new_col]=temp;
		}
	}
	 for(int i=0;i<4;i++)
        {
                for(int j=0;j<4;j++)
                {
                        printf("%d ",tran[i][j]);
                }
                printf("\n");
        }
}
