#include<stdio.h>
int main()
{
    int n,i,j,k;

    printf("Enter a number : ");
    scanf("%d",&n);

    printf("Type -1 : \n");
    for(i=n; i>=1; i--)
    {
        for(j=1; j<=i; j++)
            printf(" ");
        for(j=n; j>=i; j--)
            printf("* ");
        printf("\n");
    }
    for(i=1; i<=n; i++)
    {
        printf(" ");
        for(j=1; j<=i; j++)
            printf(" ");
        for(k=n-1; k>=i; k--)
            printf("* ");
        printf("\n");
    }

    printf("Type -2 : \n");
    for(i=n; i>=1; i--)
    {
        for(j=1; j<=i; j++)
            printf(" ");
        for(k=n; k>=i; k--)
            printf("%d ",i);
        printf("\n");
    }
    for(i=1; i<=n; i++)
    {
        printf(" ");
        for(j=1; j<=i; j++)
            printf(" ");
        for(k=n-1; k>=i; k--)
            printf("%d ",j);
        printf("\n");
    }

    printf("Type -3 : \n");
    for(i=n; i>=1; i--)
    {
        for(j=1; j<=i; j++)
            printf(" ");
        for(k=n; k>=i; k--)
            printf("%d ",k);
        printf("\n");
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
            printf(" ");
        for(k=n; k>=i; k--)
            printf("%d ",k);
        printf("\n");
    }
}
