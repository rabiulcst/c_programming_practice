#include <stdio.h>
int main()
{
	int n1,n2,n3,t;
	printf("Enter two number : ");
	scanf("%d %d %d",&n1,&n2,&n3);

	n3 = n1 + n3;
	n1 = n3 - n1;
	n3 = n3 - n1;

	printf("After swapping : %d %d %d",n1,n2,n3);


	return 0;
}