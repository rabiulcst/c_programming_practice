#include <stdio.h>
int main()
{
	int n1,n2,n3,t;
	printf("Enter three number : ");
	scanf("%d %d %d",&n1,&n2,&n3);

	t = n1;
	n1 = n3;
	n3 = t;

	printf("After swapping : %d %d %d",n1,n2,n3);


	return 0;
}
