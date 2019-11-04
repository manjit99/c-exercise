#include <stdio.h>

int factorial(int no)
  {
    int x;
    if(no==1||no==0)
	    return(1);
    else
	    x=no*factorial(no-1);
    	    return(x);
  }

int main() {
  int factor;
  int num;
  printf("enter the no to calculate the factorial\n");
  scanf("%d",&num);
  
  factor=factorial(num);
  printf("the factorial is:%d\n",factor);
}
