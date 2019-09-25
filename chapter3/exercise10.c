#include<stdio.h>
#include<math.h>

int main()
{
	int i, x, n, fac, sum;
	float rex;

	sum=0;
	for(x=1;x<8;x++)
	{
	// To calculate factorial value of x
	for(i=1, fac = 1; i<=x; i++) {
                fac=fac*i;
	}
	printf("factorial of %d is %d\n",x,fac);

	rex = (float)x / fac;
	printf("%d/%d! = %.3f\n", x, x, rex);
	sum=sum+rex; 
	}
	printf("sum is =%d\n",sum);
}
