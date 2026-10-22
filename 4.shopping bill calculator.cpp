#include<stdio.h>
int main()
{
	int oa,mt,total,dc;
	printf("Enter membership_type[1-0]");
	scanf("%d",&mt);
	printf("Enter the order amount:");
	scanf("%d",&oa);
	switch(mt)
	{
		case 0:
			printf("Regular member\n");
			if(oa>=500)
			{
				printf("No discount\n");
				total=oa;
				printf("The total amount is %d\n",total);
			}
			else
			{
				printf("NO discount\n");
				dc=50;
				total=oa+dc;
				printf("The total amount is %d\n",total);
			}
			break;
		case 1:
			printf("premium member\n");
			if(oa>=500)
			{
				total=oa-oa*0.1;
				printf("The total amount is %d\n",total);	
			}	
			else
			{
				printf("No discount\n");
				total=oa+50;
				printf("The total amount is %d\n",total);		
			}
			break;
		default:
			printf("invalid option\n");	
	}
}
