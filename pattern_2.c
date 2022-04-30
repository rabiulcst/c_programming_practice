#include<stdio.h>
int main()
{
    int n,i,j;

    printf("Enter a number : ");
    scanf("%d",&n);

    printf("Type -1 :\n");
    for(i=1; i<=n; i++)
    {
        printf("\t");
        for(j=1; j<=i; j++)
            printf("* ");
        printf("\n");
    }
    printf("Type -2 :\n");
    for(i=1; i<=n; i++)
    {
        printf("\t");
        for(j=1; j<=i; j++)
            printf("%d ",j);
        printf("\n");
    }
    printf("Type -3 :\n");
    for(i=1; i<=n; i++)
    {
        printf("\t");
        for(j=1; j<=i; j++)
            printf("%d ",i);
        printf("\n");
    }

}
