#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n,p,result;

    printf("Enter a number : ");
    scanf("%d",&n);

    printf("Enter value of power  = ");
    scanf("%d",&p);

    for(i=1; i<=n; i++)
    {
        result = pow(i,p);
        printf("power of %d : %d\n",i,result);
    }
    return 0;

}


