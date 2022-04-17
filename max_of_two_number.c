#include <stdio.h>
int main()
{
	int n1,n2;

	printf("Enter two number : ");
	scanf("%d %d",&n1,&n2);

	if(n1>n2)
		printf("max : %d",n1);
	else
		printf("max  : %d",n2);

	return 0;
}
