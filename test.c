#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,i;
    printf("Enter a number = ");
    scanf("%d",&n);

    if(n%2==0 || n%3==0 || n%5==0)
        printf("Ugly number ");
    else
        printf("Not ugly number : ");

}