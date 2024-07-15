/* Question 4. Accept a dat from the user and print in the format yymmdd */

#include <stdio.h>

int main()
{
    int month, day, year;
    printf("Enter a date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month, &day, &year);
    printf("You entered the date %d%d%d", month, day, year);
    return 0;
}