#include <stdio.h>
int main()
{
	int row,col,i,j,sum=0,total=0;
	printf("Enter row value : ");
	scanf("%d",&row);

	printf("Enter column value : ");
	scanf("%d",&col);

	int arr1[row][col];
	int arr2[row][col];
    int arr3[row][col];

	printf("Enter elements of maxtrix A : \n");
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			printf("\t  arr[%d][%d] = ",i,j);
			scanf("%d",&arr1[i][j]);
		}
		printf("\n");
	}
	printf("Enter elements of maxtrix B : \n");
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			printf("\t  arr[%d][%d] = ",i,j);
			scanf("%d",&arr2[i][j]);
		}
		printf("\n");
	}
	printf("\nElements of maxtrix A : \n");
	for(i=0; i<row; i++)
	{
		printf("\t\t\t");
		for(j=0; j<col; j++)
		{
			printf("%d ", arr1[i][j]);
		}
		printf("\n");
	}
	printf("\nElements of maxtrix B : \n");
	for(i=0; i<row; i++)
	{
		printf("\t\t\t");
		for(j=0; j<col; j++)
		{
			printf("%d ", arr2[i][j]);
		}
		printf("\n");
	}
	printf("\nElements of maxtrix A + B = C : \n");
	for(i=0; i<row; i++)
	{
		printf("\t\t\t");
		for(j=0; j<col; j++)
		{
		    arr3[i][j] = arr1[i][j] + arr2[i][j];
			printf("%d+%d ", arr1[i][j],arr2[i][j]);
		}
		printf(" = ");
		for(j=0; j<col; j++)
		{
			printf("%d ", arr3[i][j]);
		}
		printf("\n");
	}


}
