#include <stdio.h>
void main( )
{ /* Convert grams into kilograms */
float g, k;
printf("Enter weight in grams : ");
scanf("%f", &g);
k = g / 1000;
printf("%.2f gram = %.3f kg\n", g, k);
}
