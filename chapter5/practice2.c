#include<stdio.h>
#include<math.h>

int main()
{
	int i=2;
	int *j;
	int **k;
	int ***l;

	j=&i;
	k=&j;
	l=&k;

	printf("memory address is:%p\n",l);
}
