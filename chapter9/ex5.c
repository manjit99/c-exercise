#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char ar[1000];
	int sum=0,flag;

	printf("enter the string:\n");
	scanf(" %[^\n]s",ar);

	printf("now the string becomes:\n");

	for(int i=0;i<=strlen(ar);i++)
	{
		if(ar[i]!=' ')
		{
			printf("%c",ar[i]);
			
		}
		else
		{
			if(ar[i+1]==' ');
			else
				printf("%c",ar[i]);
		}
	}
	printf("\n");
}
