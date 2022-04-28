#include<stdio.h>
int main()
{
    int start,end,i,j,flag;

    printf("Enter start range : ");
    scanf("%d",&start);
    printf("Enter a number : ");
    scanf("%d",&end);

    printf("Print prime number range %d to %d : ",start,end);
    for(i=start; i<=end; i++)
    {
        flag = 0;
        for(j=2; j<i; j++)
        {
            if(i%j==0)
                flag = 1;
        }
        if(flag==0)
            printf("%d ",i);
    }
}

