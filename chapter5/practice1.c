#include<stdio.h>
#include<stdlib.h>

int display(int);

int main()
{
	int i = 20 ;
	display ( i ) ;
}
int display ( int j )
{
	int a=2;
	int k = 35 ;
	printf ( "\n%d", j ) ;
	printf ( "\n%d", k ) ;
	printf("%d %d %d %d",a,++a,a++);
}
