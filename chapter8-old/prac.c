#include<stdio.h>
#include<stdlib.h>
void disp(int *);
void show(int **);

void main( )
{
	int i ;
	int marks[ ] = { 55, 65, 75, 56, 78, 78, 90 } ;
	for ( i = 0 ; i <= 6 ; i++ )
		disp(&marks[i]);
}
void disp(int *n)
{
	//show (&n);
	printf("%d",*n);
}

void show(int **z)
{
	printf("%d\n",**z);
}

