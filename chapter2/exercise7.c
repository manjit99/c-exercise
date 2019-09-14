//Any character is entered through the keyboard, write a
//program to determine whether the character entered is a
//capital letter, a small case letter, a digit or a special symbol.

#include<stdio.h>
#include<stdlib.h>
int main()
{
	char x;
	int y;
	printf("enter any character:\n");
	scanf("%c",&x);
	y=("%d",x);
	if((y>=0 && y<=47)||(y>=58 && y<=64)||(y>=91&&y<=96)||(y>=123&&y<=127))
		printf("u have entered a special symbol\n");
	else if(y>=48 && y<=57)
		printf("u have entered a number\n");
	else if(y>=97&&y<=122)
		printf("u have entered a small letter between a-z\n");
	else if(y>65&&y<=90)
		printf("u have entered a capital letter between A-Z\n");

}
