#include<stdio.h>
#include<stdlib.h>
int main(){
	int a,b;
	int *ptr1;
	int *ptr2;
	ptr1=&a;
	ptr2=&b;
	printf("here we r going to first print the address of the variables and then interchange the values\n");
	printf("enter the value of a\n");
	scanf("%d",&a);
	printf("ur entered value of a is= %d\n",a);
	printf("enter the value of b\n");
	scanf("%d",&b);
	printf("ur entered value of b is= %d\n",b);
	printf("the location of a is=%pn\n",&a);
	printf("the location of b is=%pn\n",&b);
	printf("new value of a=%d\n",*ptr2);
	printf("new value of b=%d\n",*ptr1);
	return 0;

}
