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

#include <stdio.h>
#include <stdlib.h>
int main()
{
        int hardness, tensile_strength;
        float carbon_content;

        int cond1, cond2, cond3;

        printf("enter the values of hardness,carbon content and tensile strength:\n");
        scanf("%d\n%f\n%d", &hardness, &carbon_content, &tensile_strength);

        cond1 = hardness > 50;
        cond2 = carbon_content < 0.7;
        cond3 = tensile_strength > 5600;

        printf("Grade is ");

        if (cond1 && cond2 && cond3) printf("10");
        else if (cond1 && cond2) printf("9");
        else if (cond2 && cond3) printf("8");
        else if (cond1 && cond3) printf("7");
        else if (cond1 || cond2 || cond3) printf("6");
        else printf("5");

        printf("\n");
}
