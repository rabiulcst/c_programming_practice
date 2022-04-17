#include <stdio.h>
int main()
{
	float centigrade,Fahrenheit;

	printf("Enter value in Fahrenheit : ");
	scanf("%f",&Fahrenheit);

	centigrade = (Fahrenheit-32)*5/9;

	printf("Temperature in centigrade : %.2f",centigrade);

	return 0;
}
