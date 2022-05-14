#include <stdio.h>
int main()
{
    int n,i,max,min;
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
    max = arr[0];
    for(i=1; i<n; i++)
    {
        if(max<arr[i])
            max = arr[i];
    }
    min = arr[0];
    for(i=1; i<n; i++)
    {
        if(min>arr[i])
            min = arr[i];
    }

    printf("\t<< Max value = %d >>\n\t<< Min value = %d >>",max,min);
}
