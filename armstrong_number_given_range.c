#include <stdio.h>
int main()
{
	int n,i,temp,result=0,r;

	printf("Enter range : ");
	scanf("%d",&n);

	for(i=1; i<=n; i++)
	{
		temp = i;
		while(i!=0){
			r = i % 10 ;
			result += r*r*r;
			i = i / 10;
		}
		if(temp==result)
			printf("%d ",result);
	}
}
