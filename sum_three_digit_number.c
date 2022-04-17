#include <stdio.h>
int main()
{
	int n,sum=0,t;

	printf("Enter three digit number : ");
	scanf("%d",&n);

	sum = sum + n%10 + n/10%10 + n/100%100;

	printf("sum of three digit number: %d",sum);

	return 0;
}
