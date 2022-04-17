#include<stdio.h>
int main()
{
    int integer_number;
    float float_number;

    printf("Enter integer number : ");
    scanf("%d",&integer_number);

    printf("Enter float number : ");
    scanf("%f",&float_number);

    printf("integer_number : %d\n",integer_number);
    printf("float_number : %.2f\n",float_number);
    
    return 0;
}