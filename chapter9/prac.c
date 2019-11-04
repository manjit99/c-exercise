#include<stdio.h>
#include<string.h>

int main()
{
	char name[20];
	printf("enter the character:\n");

	fgets(name,18,stdin);

	printf("the name is:%s",name);
}
