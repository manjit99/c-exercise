#include<stdio.h>
#include<string.h>

void con(char *source,char *target)
{
	while(*source!='\0')
	{
		char x=*source;
		char y=*target;

		y+x;
		source++;
	}

}

int main()
{
	char d[20]="aaaallll";
	char e[10]="set";

	strcat(d,e);

	printf("%s\n",d);
}
