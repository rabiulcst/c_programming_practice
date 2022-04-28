#include<stdio.h>
int main()
{
    int n,r,c=0,t;
    printf("Enter number : ");
    scanf("%d",&n);
    t = n;
    while(n!=0){
        r = n % 10;
        n = n / 10;
        c++;
    }
    printf("Digit of %d = %d ",t,c);
}
