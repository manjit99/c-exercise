#include <stdio.h>
#include <math.h>
int main() {
	int x,y,mod,prime;
	for(x=1;x<100;x++)
	{
		for(y=2;y<=x/2;y++)
		{
			mod=x%y;
			if(mod==0)
			{
				break;
			}

		}
		if(y>x/2)
		{
			prime=x;
			printf("its a prime:%d\n",prime);
		}
	}
}
