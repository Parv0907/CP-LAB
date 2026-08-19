#include <stdio.h>
void main( )
{ /* Convert dollars into rupees */
float d, r;
printf("Enter amount in dollars : ");
scanf("%f", &d);
r = d * 48;
printf("$ %.2f = Rs. %.2f\n", d, r);
}