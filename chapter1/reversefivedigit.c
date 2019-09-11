#include<stdio.h>
#include<math.h>
int main(){
        int num,x,y,z,p,q,r,s,t,result,reverse;
        printf("enter the five digit number:\n");
        scanf("%d",&num);
        x=num/10;
        y=num%10;
        z=x/10;
        p=x%10;
        q=z/10;
        r=z%10;
        s=q/10;
        t=q%10;
        result=y+p+r+s+t;
	reverse=10000*y+1000*p+100*r+10*t+s;
        printf("the addition result of the digits of the number is=%d\n",result);
	printf("reverse of the number that u have entered=%d\n",reverse);
} 
