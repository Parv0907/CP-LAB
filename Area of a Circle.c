#include <stdio.h>
void main( )
{ /* Area of a circle */
float r, area;
printf("Enter radius of circle : ");
scanf("%f", &r);
area = (22.0 / 7.0) * r * r;
printf("Area of circle = %.2f\n", area);
}