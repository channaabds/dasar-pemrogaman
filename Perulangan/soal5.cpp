/* ------------------------- */
/* Program for - Nested for */
/* ------------------------- */
#include<stdio.h>

main()
{
int a, b;

for(a = 1; a <= 5; a++)
{
printf("\n");
for(b = a; b <= 5; b++)
printf(" %d ",a);
}
}
