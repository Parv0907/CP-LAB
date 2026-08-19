#include <stdio.h>
void main( )
{ /* Area of a triangle */
float h, l, area;
printf("Enter height and base : ");
scanf("%f %f", &h, &l);
area = (h * l) / 2.0;
printf("Area of triangle = %.2f\n", area);
}