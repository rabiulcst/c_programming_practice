#include <stdio.h>
int main()
{
	int i;
	int arr1[5]; // 'arr' is array name,5 in size of array .This array will contain garbase values
	int arr2[5] = {10,20,30,40,50}; // This array will contain 10,20,30,40,50 values
	int arr3[5] = {0,0,0,0,0}; // This array will contain 0,0,0,0,0 values
	int arr4[5] = {0}; // This array will contain 0,0,0,0,0
	int arr5[5] = {1}; // This array will contain 1,0,0,0,0 values
	int arr6[] = {10,20,30}; // The size of this array will be assumed as 3
	int arr7[3] = {10,20,30,40}; // Too many initializes error

	printf("arr1 : ");
	for(i=0; i<5; i++)
		printf("%d ", arr1[i]);
	printf("\narr2 : ");
	for(i=0; i<5; i++)
		printf("%d ", arr2[i]);
	printf("\narr3 : ");
	for(i=0; i<5; i++)
		printf("%d ", arr3[i]);
	printf("\narr4 : ");
	for(i=0; i<5; i++)
		printf("%d ", arr4[i]);
	printf("\narr4 : ");
	for(i=0; i<5; i++)
		printf("%d ", arr4[i]);
	printf("\narr5 : ");
	for(i=0; i<5; i++)
		printf("%d ", arr5[i]);
	printf("\narr6 : ");
	for(i=0; i<5; i++)
		printf("%d ", arr6[i]);
	printf("\narr7 : ");
	for(i=0; i<5; i++)
		printf("%d ", arr7[i]);


}


