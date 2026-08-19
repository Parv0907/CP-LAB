#include <stdio.h>
void main( )
{ /* Convert Celsius into Fahrenheit */
float c, f;
printf("Enter temperature in Celsius : ");
scanf("%f", &c);
f = (9.0 / 5.0) * c + 32;
printf("%.2f C = %.2f F\n", c, f);
}