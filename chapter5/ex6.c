#include<stdio.h>
#include<stdlib.h>


int febo_without_recursion()
{
	int i=1,z=1,count=1;
	for(;count<14;count++)
	{
		if(count==13)
			printf("%d\n",i);
		else
		{
			printf("%d\n",i);
			printf("%d\n",z);
		}
			i=i+z;
			z=z+i;
	}

}

void febo_with_recursion(int i,int no,int j)
{
        no++;
        if(no==13)
        {
                printf("%d\n",i);
                return;
        }
        else
        {
                printf("%d\n",i);
                printf("%d\n",j);
                i=i+j;
                j=j+i;
        }
        febo_with_recursion(i,no,j);
}

int main()
{
	char node;
	int i=1,j=1,no=0;
	febo_without_recursion();
	printf("u want to calculate the febonacci series with recursion(y/n)\n");
	scanf(" %c",&node);
	if(node=='y')
		febo_with_recursion(i,no,j);
	else
		printf("fuck u!! haat marge ja kela\n");
}

