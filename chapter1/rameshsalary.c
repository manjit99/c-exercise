#include<stdio.h>
int main(){
	int basic;
	float dearness,rent,gross_salary;
	printf("please enter the basic salary:\n");
        scanf("%d",&basic);
	dearness=basic*40/100;
	rent=basic*20/100;
	gross_salary=basic+dearness+rent;
	printf("The gross salary is:%.2f\n",gross_salary);
}
