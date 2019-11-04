#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char ar[100];
	int count=0;

	printf("enter the string:\n");
	scanf("%[^\n]s",ar);

	for(int i=0;i<=strlen(ar);i++)
	{
		if(ar[i]==' ')
			count++;
	}

	printf("total space:%d\n",count);
}
