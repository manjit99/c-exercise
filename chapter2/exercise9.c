/*(a) Using conditional operators determine:
(1) Whether the character entered through the keyboard is a
lower case alphabet or not.*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	char y;
	int x;
	printf("enter any character to check whether it is  lower case alphabet or not:\n");
	scanf("%c",&y);
	x=("%d",y);
	(x>=97&&x<=122)?printf("its a lower case\n"):printf("not a  lower case\n");
}
