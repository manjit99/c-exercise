#include<stdio.h>
int main(){
	int qntty,dis=0;
	float rate,total_expense;
	printf("enter the quantity:\n");
	scanf("%d",&qntty);
	printf("enter d rate:\n");
	scanf("%f",&rate);
	if(qntty>1000){
		dis=10;}

	total_expense=qntty*rate-qntty*rate*dis/100;
	printf("total expense is:%.2f\n",total_expense);
}
