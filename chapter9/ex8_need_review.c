#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char re(char func[],char string[])
{
	int i;
	int c=strlen(string);
	for(i=0;i<c;i++)
	{
		func[i]=string[i];
	}
	func[i]='\0';
	printf("%s ",func);
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
    int row=6,col,n=0,count=0;
    char str1[20],str2[20],num[n];

    char temp;
    printf("enter your string to compare\n");
    scanf(" %s",str1);

    printf("enter the string to replace\n");
    scanf(" %s",str2);

    printf("after modification\n");

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
			if(strcmp(str1,num)!=0)
               		{
				printf("%s ",num);

                	}
			else
			{
				count++;
				re(num,str2);
				
			}
		}
		if(c==(strlen(*(str+r))-1))
		{
			num[n]='\0';
			n=0;

			if(strcmp(str1,num)!=0)
                	{
				printf("%s ",num);
                	}
			else
			{
				 count++;
				 re(num,str2);

			}
		}
	}
	printf("\n");
	n=0;
    }
    if(count==0)
    {
    	printf("no match was found\n");
    }
    else
	    printf("%d match was found and replaced with %s\n",count,str2);
}
