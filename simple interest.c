#include <stdio.h>
void main( )
{ /* Simple interest */
float p, r, n, i, amount;
printf("Enter principal, rate and years : ");
scanf("%f %f %f", &p, &r, &n);
i = (p * r * n) / 100;
amount = p + i;
printf("Principal = Rs. %.2f\n", p);
printf("Interest = Rs. %.2f\n", i);
printf("Total amount = Rs. %.2f\n", amount);
}