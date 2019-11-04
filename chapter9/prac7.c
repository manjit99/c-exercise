#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main()
{
	char *name[6];
	char n[50];

	char *ptr;
	int len;

	for(int i=0;i<6;i++)
	{
		printf("enter the string:\n");
		scanf("%s",n);
		
		len=strlen(n);

		ptr=malloc(len+1);
		strcpy(ptr,n);
		name[i]=ptr;
	}

	for(int i=0;i<6;i++)
	{
		printf("%s\n",name[i]);
	}
}
