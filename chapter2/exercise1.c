#include<stdio.h>
int main()
{
	float cost_price,selling_price,profit_prcnt,loss_prcnt;
	printf("enter the cost price:\n");
	scanf("%f",&cost_price);
	printf("enter the selling price:\n");
        scanf("%f",&selling_price);
	if(cost_price<selling_price)
		{printf("its a profit!\n");
		profit_prcnt=((selling_price-cost_price)/cost_price)*100;
		printf("profit percent is:%.2f\n",profit_prcnt);
		}
	else if(cost_price>selling_price)
		{
		printf("its a loss!\n");
		loss_prcnt=((cost_price-selling_price)/cost_price)*100;
		printf("loss percent is:%.2f\n",loss_prcnt);
		}
	else
		printf("u gained nothing\n");
}
