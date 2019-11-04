#include<stdio.h>
#include<math.h>

void swapr(int *,int *);
void main( )
{
int a = 10, b = 20 ;
printf("before swapping:a=%d,b=%d",a,b);
swapr ( &a,&b ) ;
printf ( "\na = %d b = %d\n", a, b ) ;
}
void swapr( int *x, int *y )
{
int t ;
t = *x ;
*x = *y ;
*y = t ;
}
