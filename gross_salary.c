#include <stdio.h>
int main()
{
	int bs,gs,da,hra;
	printf("Enter salary : Rs.");
	scanf("%d",&bs);

	da = bs * 40/100;   //ds = 40%
	hra = bs * 20/100;	//hra=20%
	gs = da + hra;
	printf("DA           : Rs.%d\n",da);
	printf("HRA          : Rs.%d\n",hra);
	printf("Gross salary : Rs.%d",gs);
	return 0;
}
