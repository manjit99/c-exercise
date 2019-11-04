#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double area,peri;
int radius;
void areaperi(int,float *,float *);

void areaperi(int radius,float *area,float *peri) {
  //printf("enter the value of radius\n");
  //scanf("%p",&radius);

  area=2*3.14*pow(radius,2);
  peri=2*3.14*radius;
}
void main()
{
  printf("enter the value of radius\n");
  scanf("%d",radius);
  void areaperi(radius,&area,&peri);
  printf("area is=%f\n",area);
  printf("perimetre is=%f\n",peri);
}
