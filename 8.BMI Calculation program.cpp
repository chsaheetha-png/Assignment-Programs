#include<stdio.h>
int main()
{
	float weight,height;
	int bmi;
	printf("Enter your weight in kg:\n");
	scanf("%f",&weight);
	printf("Enter your height in meters:\n");
	scanf("%f",&height);
	printf("Calculation of bmi:\n");
	bmi=weight/(height*height);
	printf("The bmi=%d\n",bmi);
	if(bmi<18.5)
		printf("under weight\n");
	else if(bmi>=18.5||bmi<=25)
		printf("Normal\n");
	else if(bmi>=25||bmi<=30)
		printf("Over weigth\n");
	else
		printf("obese\n");			
	
}
