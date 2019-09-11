#include<stdio.h>
#include<math.h>
int main(){
	int num,x,y,z,p,q,r,s,t,result;
	printf("enter the five digit number:\n");
	scanf("%d",&num);
	x=num/10;
	y=num%10;
	z=x/10;
	p=x%10;
	q=z/10;
	r=z%10;
	s=q/10;
	t=q%10;
	result=y+p+r+s+t;
	printf("the addition result of the digits of the number is=%d\n",result);
}
