//to convert the lower case of a string to upper case
#include<stdio.h>
#include<string.h>

int main()
{
	char name[40];
	int x,y;
	printf("enter the string:\n");
	scanf("%s",name);
	
	x=strlen(name);

	for(int i=0;i<x+1;i++)
	{
		y=name[i];
		
		if(y>96&&y<123)
			{
				y=y-32;
			}	
		name[i]=y;
	}

	printf("coverting all the lower case to upper case the result becomes:%s\n",name);
	
}
