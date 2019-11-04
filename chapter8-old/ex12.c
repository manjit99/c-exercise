#include<stdio.h>
#include<stdlib.h>


void choice(int *);
	
void print(int *,int,int,int);

int main()
{
	int ar[4][4]={};
	int f=15,count;
	char press;
	for(int i=0;i<4;i++)
	{
		for(int y=0;y<4;y++)
		{
			ar[i][y]=f;
			f--;		
		}
	}

	for(int j=0;j<4;j++)
	{
		for(int k=0;k<4;k++)
		{
			printf("%d ",ar[j][k]);
		}
		printf("\n");
	}
	choice(ar);
}

void choice(int *p)
{
	int new_row,row,new_col,col,before,after,t_col=4,l,q;
	int element,move=0;
	char press;

	for(l=0;l<4;l++)
	{
		for(q=0;q<4;q++)
		{
			element=*(p+l*t_col+q);
			if(element==0)
			{	row=l;
				col=q;
			}
		}
	}

	before=*(p+row*t_col+col);

	printf("enter ur choice:w/s/a/d\n");
        scanf(" %c",&press);
	if(press=='w'||press=='s'||press=='a'||press=='d')
	{
		move=move+1;

		if(press=='w')
        	{
                	new_row=row-1;
                	after=*(p+new_row*t_col+col);
                	*(p+new_row*t_col+col)=before;
                	*(p+row*t_col+col)=after;
                	system("clear");
                	print(p,4,4,move);
        	}

        	if(press=='s')
        	{
                	new_row=row+1;
                	after=*(p+new_row*t_col+col);
                	*(p+new_row*t_col+col)=before;
                	*(p+row*t_col+col)=after;
                	system("clear");
                	print(p,4,4,move);
        	}

		 if(press=='a')
        	{
                	new_col=col-1;
                	after=*(p+row*t_col+new_col);
                	*(p+row*t_col+new_col)=before;
                	*(p+row*t_col+col)=after;
                	system("clear");
                	print(p,4,4,move);
        	}

        	if(press=='d')
        	{
                	new_col=col+1;
                	after=*(p+row*t_col+new_col);
                	*(p+row*t_col+new_col)=before;
                	*(p+row*t_col+col)=after;
                	system("clear");
                	print(p,4,4,move);
        	}
        	choice(p);
	}
	else
	{
		printf("try it again");
		choice(p);

	}
}

void print(int *p,int t_row,int t_col,int move)
{
	int val;
	for(int i=0;i<t_row;i++)
	{
		for(int j=0;j<t_col;j++)
		{
			val=*(p+i*t_col+j);
			if(val<10)
				printf(" %d ",val);
			else
				printf("%d ",val);
		}
		printf("\n");
	}
	printf("total moves:%d\n",move);
}
