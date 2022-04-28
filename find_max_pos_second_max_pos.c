#include <stdio.h>
int main()
{
	int n,i,max;
	printf("Enter array size : ");
	scanf("%d",&n);

	int arr[n];
	printf("Enter array elements : \n");
	for(i=0; i<n; i++)
	{
		printf("arr[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	printf("Print array elements : ");
	for(i=0; i<n; i++)
	{
		printf("%d ",arr[i]);
	}

	max = arr[0];
	for(i=1; i<n; i++)
	{
		if(arr[i]>max)
			max = arr[i];
		else
			max = arr[0];
	}

	printf("max : %d",max);
}
