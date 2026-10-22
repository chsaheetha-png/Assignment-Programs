#include<stdio.h>
int main()
{
	int id,password;
	id=101;
	password=4321;
	printf("Enter ID:\n");
	scanf("%d",&id);
	if(id!=101)
		printf("User not found");
	else
	{
		printf("Enter password:\n");
		scanf("%d",&password);
		if(password==4321)
			printf("Login successful");
		else
			printf("Incorrect password");		
	}	
}
