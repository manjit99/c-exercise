#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define FOUND 1 
#define NOTFOUND 0 

int main()
{
	char ar[3][10]={
		"Manjit",
		"Mrinal",
		"Manash"
	};

	int i=0,flag;
	char name[20];

	printf("enter your name:");
	scanf("%s",name);

	flag=NOTFOUND;

	for(;i<3;i++)
	{
		if(strcmp(&ar[i][0],name)==0)
		{
			printf("your name is:%s\n",name);
			printf("u r on the list\n");
			flag=FOUND;
			break;
		}
	}

	if(flag==NOTFOUND)
	{
		printf("u r an trespasser\n");
	}
}

