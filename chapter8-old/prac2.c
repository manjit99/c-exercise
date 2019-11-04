#include<stdio.h>

int main()
{
	char a[4][2];
	int i,j;

	for(i=0;i<=3;i++)
	{
		printf("enter d name:\n");
		scanf("%c",&a[i][0]);
		printf("enter d age\n");
		scanf("%c",&a[i][1]);
	}

	for(j=0;j<=3;j++)
	{
		printf("the name is=%c and roll no is=%c\n",a[j][0],a[j][1]);
	}
}
