#include <stdio.h>
int main()
{
	int n1,n2,n3;

	printf("Enter three number : ");
	scanf("%d %d %d",&n1,&n2,&n3);

	if(n1>n2 && n1>n3)
        printf("max : %d",n1);
    else if(n2>n1 && n2>n3)
        printf("max : %d",n2);
    else
        printf("Max : %d",n3);

	return 0;
}
