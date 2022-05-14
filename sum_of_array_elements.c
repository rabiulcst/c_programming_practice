#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter size of elements : ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter array elements : ");
    for(i=0; i<n; i++)
        scanf("%d",&arr[i]);

    printf("Print array elements : ");
    for(i=0; i<n; i++)
        printf(" %d", arr[i]);

    for(i=0; i<n; i++)
        sum += arr[i];

    printf("\nSum of array elements : %d",sum);

}