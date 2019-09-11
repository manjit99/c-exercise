#include<stdio.h>
int main(){
	int maximum_mark=500;
	float a,b,c,d,e,total,percentage;
	printf("enter d mark of subject A:\n");
	scanf("%f",&a);
	printf("enter d mark of subject B:\n");
        scanf("%f",&b);
	printf("enter d mark of subject C:\n");
        scanf("%f",&c);
	printf("enter d mark of subject D:\n");
        scanf("%f",&d);
	printf("enter d mark of subject E:\n");
        scanf("%f",&e);
	total=a+b+c+d+e;
	percentage=total/maximum_mark*100;
	printf("the total mark obtained is:%.2f\n",total);
	printf("the total mark obtained in percentage is:%.2f\n",percentage);
}
