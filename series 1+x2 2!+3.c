#include<stdio.h>
int main()
{
    int i,n;

    printf("Enter a number = ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        if(i==1)
            printf("1");
        else{
            printf(" + x^%d/%d!",i,i);
        }
    }

    return 0;
}
