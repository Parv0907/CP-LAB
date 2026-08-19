#include <stdio.h>
void main( )
{ /* Convert rupees into dollars */
float r, d;
printf("Enter amount in rupees : ");
scanf("%f", &r);
d = r / 48;
printf("Rs. %.2f = $ %.2f\n", r, d);
}