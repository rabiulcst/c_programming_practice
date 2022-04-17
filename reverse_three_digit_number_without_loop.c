#include <stdio.h>
int main()
{
	int n,rev;

	printf("Enter three digit number : ");
	scanf("%d",&n);

	rev = n%10*100+n/10%10*10+n/100;

	printf("sum of three digit number: %d",rev);

	return 0;
}
