#include <stdio.h>
int main()
{
	int arr1[3][4] = {10,15,20,25,30,35,40,45,50,55,60,65},i,j; // 2d array initilization 
	
    int arr2[3][4] = {                    // 2d array initilization
        {10,20,30,40},
        {25,35,45,55},
        {35,45,55,65}
    };
	printf("2d array1 elements : \n");
	printf("\tcolumn:\t        c1 c2 c3 c4 \n\n");
	for(i=0; i<3; i++)
	{
		printf("\tRow %d : ",i+1);
		printf("\t");
		for(j=0; j<4; j++)
		{
			printf("%d ", arr1[i][j]);
		}
		printf("\n");
	}
	printf("2d array2 elements : \n");
	printf("\tcolumn:\t        c1 c2 c3 c4 \n\n");
	for(i=0; i<3; i++)
	{
		printf("\tRow %d : ",i+1);
		printf("\t");
		for(j=0; j<4; j++)
		{
			printf("%d ", arr2[i][j]);
		}
		printf("\n");
	}
}
