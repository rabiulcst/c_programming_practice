#include <stdio.h>
#define MAX 20
int i=0,deci,arr[MAX];
void deci_to_octal(int n)
{
   if(n<=8)
    printf("Octal = %d \n", n);
   else{
    while(n!=0){
        arr[i] = n % 8;
        n = n / 8;
        i++;
    }
    i = i - 1;
    printf(" \t  << In Octal of %d : ",deci);
    while(i>=0){
        printf("%d", arr[i]);
        i--;
    }
    printf(" >>\n");
   }
}
int main()
{
    printf("Enter decimal number : ");
    scanf("%d",&deci);

    deci_to_octal(deci);
}