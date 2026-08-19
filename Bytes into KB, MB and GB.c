#include <stdio.h>
void main( )
{ /* Convert bytes into KB, MB and GB */
float b, kb, mb, gb;
printf("Enter size in bytes : ");
scanf("%f", &b);
kb = b / 1024;
mb = kb / 1024;
gb = mb / 1024;
printf("%.0f bytes = %.4f KB\n", b, kb);
printf("%.0f bytes = %.4f MB\n", b, mb);
printf("%.0f bytes = %.4f GB\n", b, gb);
}