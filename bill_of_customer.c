#include <stdio.h>
int main()
{
	int call;
	printf("Enter Number of Calls : ");
	scanf("%d",&call);

	if(call>=1 && call<=100)
		printf("Rate : Rs.0");
	else if(call>100 && call<=200)
		printf("Rate : Rs.0.80");
	else if(call>200 && call<=500)
		printf("Rate : Rs.1.00");
	else
		printf("Rate : Rs.1.20");

	return 0;
}