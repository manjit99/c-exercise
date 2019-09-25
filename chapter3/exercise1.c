#include<stdio.h>
#include<stdlib.h>
int main()
{
	int x,n,factor=1,count;
	printf("enter the number for which u want to calculate the factorial:\n");
	scanf("%d",&n);
	if(n==1)
		printf("factorial is 1\n");
	else {	
		for(x=n;x!=1;x--) {
			count=factor*x;
			factor=count;
		}
		printf("the factorial is:%d\n",factor);
	}

}
