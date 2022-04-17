#include <stdio.h>
int main()
{
	int hr,min,sec,r;

	printf("Enter second : ");
	scanf("%d",&sec);

	hr = sec / 3600;
	min = (sec - (hr * 3600)) / 60;
	sec = sec - (hr*3600+min*60);

	printf("H:M:S = %d:%d:%d",hr,min,sec);

	return 0;

}
