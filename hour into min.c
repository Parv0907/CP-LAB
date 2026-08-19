#include <stdio.h>
void main( )
{ /* Convert hours & minutes into total minutes */
int h, m, t;
printf("Enter hours and minutes : ");
scanf("%d %d", &h, &m);
t = h * 60 + m;
printf("%d hour %d min = %d min\n", h, m, t);
}