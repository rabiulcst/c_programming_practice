#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter size of elements : ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter array elements : ");
    for(i=0; i<n; i++)
        scanf("%d",&arr[i]);

    printf("Print array elements : ");
    for(i=0; i<n; i++)
        printf(" %d", arr[i]);
    printf("\nPrint array elements (reverse) : ");
    for(i=n-1; i>=0; i--)
        printf(" %d", arr[i]);

}