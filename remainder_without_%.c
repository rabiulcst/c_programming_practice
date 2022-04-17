#include <stdio.h>
int main()
{
	int n,ds,remainder;
	printf("Enter number   : ");
	scanf("%d",&n);

	printf("Enter divisors : ");
	scanf("%d",&ds);

	 remainder = n - ((n / ds) * ds);

	printf("Remainder      : %d",remainder);

	return 0;
}
