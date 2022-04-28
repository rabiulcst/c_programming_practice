#include <stdio.h>
#define PI 3.14
int main()
{
    float volume,area;
    int radius;
    printf("Enter radius : ");
    scanf("%d",&radius);


    volume = 4/3 * PI * radius * radius * radius;
    area  = 4 * PI * radius * radius;

    printf(" \t << volume of sphere : %.2f >>\n\t << area of sphere : %f >> ", volume,area);


}