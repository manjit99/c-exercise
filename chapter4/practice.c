/* A menu driven program */
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int choice,x,fac=1,u,p,i,j;
	while ( 1 )
	{
		printf ( "\n1. Factorial" ) ;
		printf ( "\n2. Prime" ) ;
		printf ( "\n3. Odd/Even" ) ;
		printf ( "\n4. Exit" ) ;
		printf ( "\nYour choice? " ) ;
		scanf ( "%d", &choice ) ;
		switch ( choice )
		{
		case 1 :
			/* logic for factorial of a number */
			printf("enter the no:\n");
			scanf("%d",&x);
			u=x;
			for(;x!=0;x--)
			{
				fac=fac*x;
			}
			printf("the factorial of %d is %d\n",u,fac);
			break ;
		case 2 :
			/* logic for deciding prime number */
			printf("enter d no:\n");
			scanf("%d",&p);
			for(i=2;i<=p/2;i++)
			{
				if(p%i==0)
					printf("Not a prime\n");
					break;
			}
			if(i>p/2)
			{
				printf("its a prime\n");
			}
			break ;
		case 3 :
			/* logic for odd/even */
			printf("enter d no:\n");
			scanf("%d",&j);
			if(j%2==0)
				printf("its a even no\n");
			else
				printf("its odd");
			break ;
		case 4 :
			exit(0) ;
		}
	}
}
