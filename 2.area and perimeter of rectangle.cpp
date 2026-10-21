#include<stdio.h>
int main()
{
	int l,b,area,perimeter;
	printf("Enter the lenght and breath of rectangle:\n");
	scanf("%d%d",&l,&b);
	area=l*b;
	printf("The area of rectangle is %d",area);
	perimeter=2*area;
	printf("The perimeter of rectangle is %d",perimeter);
}
