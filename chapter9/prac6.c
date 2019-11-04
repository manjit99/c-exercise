#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	char *name[]={
		"manjit",
		"nabajit",
		"kuljit",
		"mrinal",
		"aaal",
		"baal",
		"set"
	};


	printf("original->%s and %s\n",name[2],name[1]);
	char *temp;

	temp=name[2];
	name[2]=name[1];
	name[1]=temp;

	printf("after exchange->%s and %s\n",name[2],name[1]);
}
