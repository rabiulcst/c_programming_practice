#include <stdio.h>
int main()
{
	int n,i;

	printf("Enter a number : ");
	scanf("%d",&n);

	for(i=2; i<=n; i++)
		printf("%d ",i*i*i);

	return 0;
}
