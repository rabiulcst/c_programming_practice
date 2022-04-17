#include<stdio.h>
int main()
{
    int i,n,j;
    printf("Enter a number : ");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        printf("%d = ",i);
        for(j=1; j<=10; j++)
        {
            printf("%d X %d = %d ",i,j,i*j);
        }
        printf("\n\n");
    }
    return 0;
}
