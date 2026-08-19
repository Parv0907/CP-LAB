#include <stdio.h>
void main( )
{ /* Convert kilograms into grams */
float k, g;
printf("Enter weight in kg : ");
scanf("%f", &k);
g = k * 1000;
printf("%.3f kg = %.2f gram\n", k, g);
}