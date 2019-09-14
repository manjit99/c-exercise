#include<stdio.h>
int main()
{
	int ref_year,input_year,dif,no_lp_year,normal_year,no_of_days,which_day;
	ref_year=1900;
	//input_year=The year that the user has entered;
	printf("enter the year of your choice:\n");
        scanf("%d",&input_year);
	dif=input_year-ref_year;
	no_lp_year=dif/4;
	normal_year=dif-no_lp_year;
	no_of_days=no_lp_year*366+normal_year*365;
	which_day=no_of_days%7;
	if(which_day==0)
		printf("monday\n");
	else if(which_day==1)
		printf("tuesday\n");
	else if(which_day==2)
                printf("wednessday\n");
	else if(which_day==3)
                printf("thursday\n");
	else if(which_day==4)
                printf("friday\n");
	else if(which_day==5)
                printf("saturday\n");
	else if(which_day==6)
                printf("sunday\n");
}
