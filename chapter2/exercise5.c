#include<stdio.h>
int main()
{
int x,y,z;
/*x=age of Ram,y=age of Shyam,z=age of ajay*/
printf("enter the ages of Ram,Shyam and Ajay:\n");
scanf("%d\n%d\n%d",&x,&y,&z);
if(x<y&&x<z)
	printf("Ram is the youngest\n");
else if(y<x&&y<z)
	printf("Shyam is d youngest\n");
else if(z<x&&z<y)
	printf("Ajay is d youngest\n");
else
	printf("inconclusive data\n");
}
