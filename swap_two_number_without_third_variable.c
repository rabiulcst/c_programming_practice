#include <stdio.h>
int main()
{
	int n1,n2,t;
	printf("Enter two number : ");
	scanf("%d %d",&n1,&n2);

	n2 = n1 + n2;
	n1 = n2 - n1;
	n2 = n2 - n1;

	printf("After swapping : %d %d",n1,n2);


	return 0;
}