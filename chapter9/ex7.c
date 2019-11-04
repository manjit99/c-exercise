#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char reverse(char func[])
{
	int i;
	int c=strlen(func);
	int d=c-1;
	char new[c];
	for(i=0;i<c;i++)
	{
		new[d-i]=func[i];
	}
	new[c]='\0';
	printf("%s ",new);
}

int main()
{
    char *str[]={
        "We will teach you how to...",
        "Move a mountain",
        "Level a building",
        "Erase the past",
        "Make a million",
        "...all through C!"
    };

    for(int d=0;d<6;d++)
    {
    	printf("%s\n",str[d]);
    }
    printf("\n");
    int row=6,col,n=0;
    char num[n];

    char temp;

    printf("after reversing;\n\n");

    for(int r=0;r<row;r++)
    {
    	for(int c=0;c<strlen(*(str+r));c++)
	{
		temp=*(*(str+r)+c);
		
		if(temp!=' ')
		{
			num[n]=temp;
			n++;
		}
		else
		{
			num[n]='\0';
			n=0;
			reverse(num);
		}
		if(c==(strlen(*(str+r))-1))
		{
			num[n]='\0';
			n=0;
			reverse(num);

		}
	}
	printf("\n");
	n=0;
    }
}
