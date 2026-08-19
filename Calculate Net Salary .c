#include <stdio.h>
void main( )
{ /* Net salary = gross + allowance - deduction */
float gross, allowance, deduction, net;
printf("Enter gross salary : ");
scanf("%f", &gross);
allowance = gross * 10 / 100; deduction = gross * 3 / 100; net = gross + allowance - deduction;
// 10 % of gross
// 3 % of gross
printf("Gross salary = Rs. %.2f\n", gross);
printf("Allowance = Rs. %.2f\n", allowance);
printf("Deduction = Rs. %.2f\n", deduction);
printf("Net salary = Rs. %.2f\n", net);
}