#include <stdio.h>
#include <math.h>
int main()
{
    int i=1,n,sum=0,sum_of_even=0,sum_of_odd=0,r;

    printf("Enter a number : ");
    scanf("%d",&n);

    while(i<=n){
        sum += i;
        if(i%2==0){
            sum_of_even += i;
        }
        else{
            sum_of_odd += i;
        }
        i++;
    }
    r = sqrt(sum_of_odd);
    printf("Sum of n(n=%d) number : %d\n",n,sum);
    printf("sum_of_even number : %d\n",sum_of_even);
    printf("sum_of_odd number : %d\n",sum_of_odd);
    printf("r = %d\n", r);
}