#include <stdio.h>
void main( )
{ /* Net sales = gross sales - 10% discount */
float gross, discount, net;
printf("Enter gross sales : ");
scanf("%f", &gross);
discount = gross * 10 / 100;
net = gross - discount;
printf("Gross sales = Rs. %.2f\n", gross);
printf("Discount = Rs. %.2f\n", discount);
printf("Net sales = Rs. %.2f\n", net);
}