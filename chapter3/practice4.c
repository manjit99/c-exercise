#include<stdio.h>
int main()
{
	int i,num;
	printf("enter d value of num to check whether its prime or not:\n");
	scanf("%d",&num);
	i=2;
	while(i<=num-1)
	{
		if(num%i==0)
		{
			printf("its not prime\n");
			break;
		}
		i++;
	}
	if(i==num)
		printf("its a prime\n");
}
