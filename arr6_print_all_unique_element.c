#include<stdio.h>
int main()
{
    int n,i,j,sum=0,temp,k=0;
    printf("Enter size of elements : ");
    scanf("%d",&n);

    int arr[n],arr2[n];
    printf("Enter array elements : ");
    for(i=0; i<n; i++)
        scanf("%d",&arr[i]);

    printf("Print array elements : ");
    for(i=0; i<n; i++)
        printf(" %d", arr[i]);

    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++)
        {
            if(arr[i]!=arr[j]){
                arr2[k] = arr[i];
                k++;
            }       
        }
    }

    printf("Print array elements : ");
    for(i=0; i<=k; i++)
        printf(" %d", arr2[i]);   
}
