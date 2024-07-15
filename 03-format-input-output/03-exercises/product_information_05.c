/* Formats product information entered by the user */

#include <stdio.h>

int main()
{
    int itemNumber;
    float unitPrice;
    int month;
    int day;
    int year;

    printf("Enter item number: ");
    scanf("%d", &itemNumber);

    printf("Enter unit price: ");
    scanf("%f", &unitPrice);

    printf("Enter purchase date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("Item\t\tUnit\t\tPurchase\n\t\tPrice\t\tDate\n%d\t\t$ %.2f\t\t%d/%d/%d", itemNumber, unitPrice, month, day, year);
    return 0;
}