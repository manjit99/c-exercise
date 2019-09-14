//A certain grade of steel is graded according to the following
//conditions:
//(i) Hardness must be greater than 50
//(ii) Carbon content must be less than 0.7
//(iii) Tensile strength must be greater than 5600
//The grades are as follows:
//Grade is 10 if all three conditions are met
//Grade is 9 if conditions (i) and (ii) are met
//Grade is 8 if conditions (ii) and (iii) are met
//Grade is 7 if conditions (i) and (iii) are met
//Grade is 6 if only one condition is met
//Grade is 5 if none of the conditions are met

#include<stdio.h>
#include<stdlib.h>
int main()
{
        int hardness;
        float carbon_content;
        int tensile_strength;
        printf("enter the values of hardness,carbon content and tensile strength:\n");
        scanf("%d\n%f\n%d",&hardness,&carbon_content,&tensile_strength);
        if((hardness>50)&&(carbon_content<0.7)&&(tensile_strength>5600))
                printf("Grade is 10\n");
        else if((hardness>50)&&(carbon_content<0.7)&&(tensile_strength<=5600))
                printf("grade is 9\n");
        else if((hardness<=50)&&(carbon_content<0.7)&&(tensile_strength>5600))
                printf("grade is 8\n");
        else if((hardness>50)&&(carbon_content>=0.7)&&(tensile_strength>5600))
                printf("grade is 7\n");
        else if((hardness>50)||(carbon_content<0.7)||(tensile_strength>5600))
                printf("Grade is 6\n");
        else if((hardness<=50)&&(carbon_content>=0.7)&&(tensile_strength<=5600))
                printf("Grade is 5\n");
        else
                printf("Not gradeable\n");
}

