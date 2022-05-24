#include <stdio.h>
int main()
{
	int row,col,i,j;
	printf("Enter row value : ");
	scanf("%d",&row);

	printf("Enter column value : ");
	scanf("%d",&col);

	int arr[row][col];

	printf("Enter array elements : \n");
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			printf("\t  arr[%d][%d] = ",i,j);
			scanf("%d",&arr[i][j]);
		}
		printf("\n");
	}
	printf("2d array1 elements : \n");
	printf("\tcolumn:\t        ");
	for (int i = 0; i < col; i++)
		printf("c%d ",i);
	printf("\n\n");
	for(i=0; i<row; i++)
	{
		printf("\tRow %d : ",i+1);
		printf("\t");
		for(j=0; j<col; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
