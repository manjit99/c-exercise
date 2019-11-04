#include<stdio.h>
#include<string.h>

int main()
{
	char name[][10]={
		"manjit",
		"kuljit",
		"nabajit",
		"Manash",
		"Mrinal",
		"Biswa"
	};

	printf("original-> %s and %s\n",&name[0][10],&name[1][10]);

	int i=0;
	char t;

	for(;i<10;i++)
	{
		t=name[0][i];
		name[0][i]=name[1][i];
		name[1][i]=t;
	}

	printf("after copying->%s and %s\n",&name[0][0],&name[1][0]);

}
