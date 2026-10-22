#include<stdio.h>
int main()
{
	int age,credit;
	float monthly_income;
	printf("Enter yor age:\n");
	scanf("%d",&age);
	printf("Enter your monthly income:\n");
	scanf("%f",&monthly_income);
	printf("Enter your credit score:\n");
	scanf("%d",&credit);
	if(age<21||age>60)
		printf("loan rejected: age not in 21 to 60\n");
	else if(monthly_income<25000)
		printf("loan rejected: income below 25,000\n");
	else if(credit<700)
		printf("loan rejected: credit score below 700\n");
	else
		printf("loan approved");
}
