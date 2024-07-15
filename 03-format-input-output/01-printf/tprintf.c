/* Prints int and float values in various formats */

#include <stdio.h>

int main()
{
    int i;
    float x;
    i = 40;
    x = 839.21;

    printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i);
    printf("|%10.3f|%10.3e|%-10g|\n", x, x, x);
    
    int y;
    int z;
    scanf("%d%d", &y, &z);

    printf("y=%d, z=%d", y, z);
    return 0;
}