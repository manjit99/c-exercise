#include <stdio.h>
#include <stdlib.h>
int main(){
  float total,profit_earned,cost_of_one_item;
  int total_items=15;
  printf("enter the total selling price of 15 items\n");
  scanf("%f",&total );
  printf("enter the total profit\n");
  scanf("%f",&profit_earned);
  cost_of_one_item=(total-profit_earned)/total_items;
  printf("cost of each item is:%.3f\n",cost_of_one_item);
}
