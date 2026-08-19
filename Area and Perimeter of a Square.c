#include <stdio.h>
void main( )
{ /* Area & perimeter of a square */
float l, area, peri;
printf("Enter side of square : ");
scanf("%f", &l);
area = l * l;
peri = 4 * l;
printf("Area = %.2f\n", area);
printf("Perimeter = %.2f\n", peri);
}