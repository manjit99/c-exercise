#include <stdio.h>
#include <stdlib.h>
int main()
{
  int x,pos=0,neg=0,zero=0;
  char choice;
  printf("want to enter(y/n)\n");
  scanf("%c",&choice);
  for(;choice!='n';){
    if (choice=='y') {
    printf("enter d no\n");
    scanf("%d",&x);
    if(x<0)
    {
      printf("u have entered a negative no\n");
      neg=neg+1;
      neg=neg;
    }
    else if(x>0)
    {
      printf("u have entered a positve no\n");
      pos=pos+1;
      pos=pos;
    }
    else
    {
      printf("u have entered a zero\n");
      zero=zero+1;
      zero=zero;
    }
    }
    printf("want to enter(y/n)\n");
    scanf(" %c",&choice);
  }
  if (choice=='n') {
    printf("u have entered %d=positive no,%d=negative no,%d=zeros\n",pos,neg,zero);
  }
}
