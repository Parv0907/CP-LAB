#include <stdio.h>
void main( )
{ /* Convert dollars into pounds through rupees */
float d, r, p;
printf("Enter amount in dollars : ");
scanf("%f", &d);
r = d * 48; p = r / 70; // dollars -> rupees
// rupees -> pounds
printf("$ %.2f = Rs. %.2f = Pound %.2f\n", d, r, p);
}