#include<stdio.h>
int main()
{
	int mark;
	printf("Enter your marks:");
	scanf("%d",&mark);
	if(mark>=90)
		printf("Grade:O\n");
	else if(mark>=80)
		printf("Grade:A+\n");
	else if(mark>=70)
		printf("Grade:A\n");
	else if(mark>=60)
		printf("Grade:B\n");	
	else if(mark>=50)
		printf("Grade:C\n");
	else if(mark<0||mark>100)
		printf("Inavlid marks\n");
	else
		printf("Grade:Fail\n");					
}
