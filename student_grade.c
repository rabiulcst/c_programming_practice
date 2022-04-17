#include <stdio.h>
int main()
{
	int per;
	printf("Enter marks : ");
	scanf("%d",&per);

	if(per>=90)
		printf("Grade : A");
	else if(per>=70)
		printf("Grade : B");
	else if(per>=50)
		printf("Grade : C");
	else
		printf("Grade : F");

	return 0;
}
