#include<stdio.h>
#include<math.h>
int main(){
	int num,x,y,z,p,result;
	printf("please enter a four digit number:\n");
	scanf("%d",&num);
	x=num/10;
	y=num%10;
	z=x/10;
	p=z/10;
	result=p+y;
	printf("the result of the first and fourth digit is=%d\n",result);
}
