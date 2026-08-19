#include <stdio.h>
void main( )
{ /* All four arithmetic operations on 2 numbers */
float a, b, s, d, m, q;
printf("Enter 2 Nos. : ");
scanf("%f %f", &a, &b);
s = a + b;
d = a - b;
m = a * b;
q = a / b;
printf("%.2f + %.2f = %.2f\n", a, b, s);
printf("%.2f - %.2f = %.2f\n", a, b, d);
printf("%.2f * %.2f = %.2f\n", a, b, m);
printf("%.2f / %.2f = %.2f\n", a, b, q);
}