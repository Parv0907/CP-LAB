#include <stdio.h>
void main( )
{ /* Swap 2 values using a third variable */
int a, b, t;
printf("Enter 2 Nos. : ");
scanf("%d %d", &a, &b);
printf("Before swap : a = %d, b = %d\n", a, b);
t = a; a = b; b = t; // park a in t
// copy b into a
// copy old a back into b
printf("After swap : a = %d, b = %d\n", a, b);
}