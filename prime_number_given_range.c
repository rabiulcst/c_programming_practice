#include<stdio.h>
int main()
{
    int n,i,j,flag;

    printf("Enter a number : ");
    scanf("%d",&n);

    if(n==1)
        printf("1 is not prime number : \n");
    else{
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
            }

        }
    }
}

