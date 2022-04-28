#include<stdio.h>
int main()
{
    int n,r,sum=0,t;
    printf("Enter number : ");
    scanf("%d",&n);
    t = n;
    while(n!=0){
        r = n % 10;
        sum = sum * 10 + r;
        n = n / 10;
    }
    if(sum==t)
        printf("palindrome number :");
    else
        printf("Not palindrome number : ");
}


