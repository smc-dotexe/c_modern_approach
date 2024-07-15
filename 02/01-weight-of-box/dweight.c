/* Computes the dimensional weight of a 12" x 10" x 8" box */
/* from input provided by the user */

#include <stdio.h>

#define CUBIC_IN_PER_LB 166

int main()
{
    int height, length, width, volume, weight;

    printf("Enter the dimensions of the box:\n");
    printf("Height: ");
    scanf("%d", &height);
    printf("Length: ");
    scanf("%d", &length);
    printf("Width: ");
    scanf("%d", &width);

    volume = height * length * width;
    weight = (volume + CUBIC_IN_PER_LB-1) / CUBIC_IN_PER_LB;

    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight);

    return 0;
}
