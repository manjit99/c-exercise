/*Write a program to find the greatest of the three numbers
entered through the keyboard using conditional operators.*/


#include<stdio.h>
int main()
{
	float x,y,z;
	printf("enter the values of x,y and z\n");
	scanf("%f\n%f\n%f",&x,&y,&z);
	(x>y&&x>z)?printf("x is the largest no\n"):(y>x&&y>z)?printf("y is the largest\n"):(z>x&&z>y)?printf("z is d largest\n"):printf("exceptional case\n");
}
