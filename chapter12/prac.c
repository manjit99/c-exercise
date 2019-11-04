#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	FILE *fp;
	char ch;

	fp=fopen("hello.txt","r");
	int new_line=0,blank=0,tab=0,noc=0;
	while(1)
	{
		ch=fgetc(fp);
		if(fp==NULL)
		{
			printf("unable to open the file:\n");
			exit(0);
		}
		if(ch==-1)
			break;
		noc++;
		if(ch=='\n')
			new_line++;
		if(ch==' ')
			blank++;
		if(ch=='\t')
			tab++;
	}	
	fclose(fp);

	printf("character=%d\nnew line=%d\nblank=%d\ntab=%d\n",noc,new_line,blank,tab);
}
