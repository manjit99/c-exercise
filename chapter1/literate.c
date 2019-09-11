#include<stdio.h>
int main() {
  int total_population,percentage_of_total_literacy,percentage_of_man,percentage_of_literate_man,illiterate_man,illiterate_woman,total_illiterate;
  int percentage_of_total_illiteracy,no_of_man,no_of_woman,literate_man,literate_woman;
  total_population=80000;
  percentage_of_man=52;
  no_of_man=total_population*52/100;
  no_of_woman=total_population-no_of_man;
  percentage_of_total_literacy=48;
  percentage_of_total_illiteracy=100-percentage_of_total_literacy;
  total_illiterate=total_population*percentage_of_total_illiteracy/100;
  percentage_of_literate_man=35;
  literate_man=total_population*percentage_of_literate_man/100;
  illiterate_man=no_of_man-literate_man;
  literate_woman=total_population*percentage_of_total_literacy/100-literate_man;
  illiterate_woman=no_of_woman-literate_woman;
  printf("total illiterate no is=%d\n",total_illiterate);
  printf("total illiterate man %d\n",illiterate_man );
  printf("total illiterate woman %d\n",illiterate_woman );
  return 0;
}
