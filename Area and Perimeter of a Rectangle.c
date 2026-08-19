#include <stdio.h>
void main( )
{ /* Area & perimeter of a rectangle */
float l, b, area, peri;
printf("Enter length and breadth : ");
scanf("%f %f", &l, &b);
area = l * b;
peri = 2 * (l + b);
printf("Area = %.2f\n", area);
printf("Perimeter = %.2f\n", peri);
}