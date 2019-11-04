#include<stdio.h>

float product(int,float);

void main()
{
	int z;
	float y,result;
	printf("enter d integer value\n");
	scanf("%d",&z);
	printf("enter d float no\n");
	scanf("%f",&y);
	result=product(z,y);
	printf("the multiplied result is:%.3f\n",result);

}

float product(int p,float x)
{
	float res;
	res=p*x;
	return(res);
}
	
