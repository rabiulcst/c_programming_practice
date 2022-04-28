#include<stdio.h>
int main()
{
    int n,r,sum=0,t;
    printf("Enter number : ");
    scanf("%d",&n);
    t = n;
    while(n!=0){
        r = n % 10;
        sum += r;
        n = n / 10;
    }
    printf("sum of digit of given number  = %d ",sum);
}

