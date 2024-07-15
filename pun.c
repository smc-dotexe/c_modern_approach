/* 
 * Name: pun.c 
 * Purpose: c tutorial 
 * Author: Shane McGuire
 * Date: 2024-05-19
 */

#include <stdio.h>

int main()
{
    printf("Hello, World. \n");
    printf("To C or not to C? \nThat is the question\n");

    float price = 5.25;
    float paid = 12.22;

    float profit = paid - price;

    printf("$%.2f\nTotal profit", profit);
    
    return 0;
}