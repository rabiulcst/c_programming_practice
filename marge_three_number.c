#include <stdio.h>
int main()
{
	int n1,n2,n3,marge;

	printf("Enter three single digit number   : ");
	scanf("%d %d %d",&n1,&n2,&n3);

	marge = n3+n2*10+n1*100;

	printf("merge of three single digit number: %d",marge);

	return 0;
}
