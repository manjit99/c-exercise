#include<stdio.h>
#include<string.h>

int main()
{
	char num[]="hellomanjit";
	char result[30];
	int start,end,x,z;
	char c;

	printf("original string:%s\n",num);
	printf("enter the starting point no:");
	scanf("%d",&start);
	printf("enter the ending point no:");
	scanf("%d",&end);

	
	x=strlen(num);

	if(start<x&&end<x)
	{
		for(int i=start;i<=end;i++)
		{	
			result[i]=num[i];
				
		}

		if(end==0)
		{
			printf("string is:%s\n",num+start);
		}
		else
			printf("ur string is:%s\n",&result[start]);
	}

}
