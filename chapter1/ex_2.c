#include<stdio.h>
#include<math.h>
int main(){
	float distance,metre,feet,inch,centimetre;
	printf("please enter the distance in km:\n");
	scanf("%f",&distance);
	metre=distance*1000;
	centimetre=metre*100;
	feet=distance*3280.8399;
	inch=feet*12;
	printf("the distance in metre is:%.3f\n",metre);
	printf("the distance in feet is:%.3f\n",feet);
	printf("the distance in centimetre is:%.3f\n",centimetre);
	printf("the distance in inch is:%.3f\n",inch);

}
