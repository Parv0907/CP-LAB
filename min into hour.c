#include <stdio.h>
void main( )
{ /* Convert total minutes into hours & minutes */
int t, h, m;
printf("Enter total minutes : ");
scanf("%d", &t);
h = t / 60; m = t % 60; // quotient -> full hours
// remainder -> leftover minutes
printf("%d min = %d hour %d min\n", t, h, m);
}