#include <stdio.h>
#include <stdlib.h>
int main() {
	int total_stick=21,user_pick,comp_pick,remain_counter;
	for (;total_stick!=1;) {
		printf("enter d no of stick but should be less than 5\n");
		scanf("%d",&user_pick);
		if (user_pick<5&&user_pick!=0)
		{
				comp_pick=5-user_pick;
				printf("computer has picked:%d\n",comp_pick);
				remain_counter=total_stick-user_pick-comp_pick;
				total_stick=remain_counter;
				printf("remaining sticks:%d\n",remain_counter);

		}
		else
		{
			printf("wrong choice,enter again:\n");
		}
	}
	if(total_stick==1)
	{
		printf("now u have to pick the last one\n");
		printf("u lost lol\n");
	}
}
