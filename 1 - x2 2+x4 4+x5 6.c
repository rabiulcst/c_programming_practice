#include<stdio.h>
int main()
{
    int i,n;

    printf("Enter a number = ");
    scanf("%d",&n);
    for(i=0; i<=n; i+=2)
    {
        if(i==0)
            printf("1-");
        else{
            printf(" x^%d/%d! + ",i,i);
        }
    }
    return 0;
}

