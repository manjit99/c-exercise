#include<stdio.h>
#include<stdlib.h>

float area,peri;

void areaperi(int r,float *a,float *b )
{
        int j;
        j=r*r;
        *a=2*3.14*j;
        *b=2*3.14*r;

}

float main()
{
	int rad;
//	float area,peri;
	printf("enter the value of radius:\n");
	scanf("%d",&rad);
	areaperi(rad,&area,&peri);
	printf("area is=%.2f\n",area);
	printf("perimetre is=%.2f\n",peri);
}

