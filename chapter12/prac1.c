#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *fp,*fq;
	char ch;

	fp=fopen("hello.txt","r");

	if(fp==NULL)
	{
		printf("cant open the file\n");
		exit(0);
	}
	else
	{
		fq=fopen("hello1.txt","w");
		if(fq==NULL)
		{
			printf("cant open target file\n");
			exit(0);
		}
		while(1)
		{
			ch=fgetc(fp);

			if(ch==EOF)
				break;
			else
				fputc(ch,fq);
		}

	}
	fclose(fp);
	fclose(fq);
}
