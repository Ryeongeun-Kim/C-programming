#include <stdio.h>

int main(void)
{
    double km;
    printf("Please enter kilometers: \n");
    scanf("%lf", &km);
    double mile = km / 1.609 ;
    printf("%.1f km is equal to %.1f miles.", km, mile);
}