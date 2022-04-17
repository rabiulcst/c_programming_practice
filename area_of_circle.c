#include <stdio.h>
#define PI 3.14
int main()
{
	int radius;
	float area;
	printf("Enter radius : ");
	scanf("%d",&radius);

	area = PI * radius * radius;

	printf("area of circle : %.2f",area);

	return 0;
}
