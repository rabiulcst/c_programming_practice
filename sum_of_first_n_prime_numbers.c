#include<stdio.h>
int main()
{
    int n,i,j,flag,sum=0,n_prime=0;

    printf("Enter a number : ");
    scanf("%d",&n);

    printf("Print prime number : ");
    for(i=2; i<=n; i++)
    {
        flag = 0;
        for(j=2; j<i; j++)
        {
            if(i%j==0)
                flag = 1;
        }
        if(flag==0){
            printf("%d ",i);
            sum += i;
            n_prime++;
        }

    }
    printf("\n\t << Number of first n prime number : %d >> \n",n_prime);
    printf("\t   << Sum of first n(n=%d) prime number = %d >> ",n_prime,sum);
}

