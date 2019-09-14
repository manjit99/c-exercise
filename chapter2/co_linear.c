#include<stdio.h>
#include<math.h>
int main()
{
	float x1,y1,x2,y2,x3,y3,slope1,slope2;
	//here are three points (x1,y1),(x2,y2),(x3,y3)
	printf("enter the values of x1,y1,x2,y2,x3,y3:\n");
	scanf("%f\n%f\n%f\n%f\n%f\n%f",&x1,&y1,&x2,&y2,&x3,&y3);
	slope1=(x2-x1)/(y2-y1);
	slope2=(x3-x2)/(y3-y2);
	if(slope1==slope2)
		printf("they r collinear\n");
	else
		printf("not collinear\n");
}
