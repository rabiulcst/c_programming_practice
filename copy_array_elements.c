#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter size of elements : ");
    scanf("%d",&n);

    int arr[n],arr2[n];
    printf("Enter array elements : ");
    for(i=0; i<n; i++)
        scanf("%d",&arr[i]);

    printf("Print array elements  : ");
    for(i=0; i<n; i++)
        printf(" %d", arr[i]);

    for(i=0; i<n; i++)
        arr2[i] = arr[i];

    printf("\nPrint array2 elements : ");
    for(i=0; i<n; i++)
        printf(" %d", arr2[i]);

}