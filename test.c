#include <stdio.h>
int main()
{
    int n,i,max,min,sao=0,j;
    printf("Enter number of elements : ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter elements : \n");
    for(i=0; i<n; i++)
    {
        printf("Arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
    printf("print elements : \n");
    for(i=0; i<n; i++)
        printf("Arr[%d] = %d\n", i,arr[i]);

    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(arr[i]<arr[j])
                sao = 1;
        }
    }

    if(sao==1)
        printf("Strictly ascending order");
    else
        printf("Not strictly ascending order ");



}
