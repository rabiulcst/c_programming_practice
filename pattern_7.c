#include<stdio.h>
int main()
{
    int n,i,j,k;

    printf("Enter a number : ");
    scanf("%d",&n);

    for(i=n; i>=1; i--)
    {
        for(j=i; j<=n; j++)
            printf(" ");
        for(k=1; k<=i; k++)
            printf(" * ");
        printf("\n");
    }
}
