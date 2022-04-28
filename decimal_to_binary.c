#include<stdio.h>
#include <stdlib.h>
#define MAX 20
int deci,binary,arr[MAX],i=0;

void decimal_to_binary(int n)
{
    while(n!=0){
        arr[i] = n % 2;
        n = n / 2;
        i++;
    }
    i = i - 1;
    printf("\t   << Binary of %d = ",deci);
    while(i>=0){
        printf("%d ",arr[i]);
        i--;
    }
    printf(" >>");
}
int main()
{
    printf("Enter Decimal number : ");
    scanf("%d",&deci);
    decimal_to_binary(deci);
}
