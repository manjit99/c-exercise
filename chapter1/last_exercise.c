#include<stdio.h>
#include<math.h>
int main(){
        int num,x,y,z,p,q,r,s,t,new_number,add=1;
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
        new_number=10000*((s+add)%10)+1000*((t+add)%10)+100*((r+add)%10)+10*((p+add)%10)+((y+add)%10);
        printf("d new number is=%d\n",new_number);
}

