#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int add(int,int);
char fun();

int main()
	{
		int a,b,sum=0,i;
		char c,p;
		printf("enter the value of a and b\n");
		scanf("%d %d",&a,&b);
		sum =add(a,b);
		printf("the sum is:%d\n",sum);
		p=fun(c);
		printf("the value is:%c\n",p);
		//printf("the sum is:%d\n",sum);
		i=pow(2,2);
		printf("%d\n",i);
	}		

int add(int x,int y)
	{
		int res;
		res=x+y;
		return res;
	}

char fun( )
	{
		char ch ;
		printf ( "\nEnter any alphabet\n" ) ;
		scanf ( " %c", &ch ) ;
		if ( ch >= 65 && ch <= 90 )
			return ( ch ) ;
		else
			return ( ch + 32 ) ;
}
