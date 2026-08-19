#include <stdio.h>
void main( )
{ /* Program to divide 2 numbers */
float a, b, c;
printf("Enter 2 Nos. : ");
scanf("%f %f", &a, &b);
c = a / b;
printf("%.2f / %.2f = %.2f\n", a, b, c);
}