#include "cs50.h"
#include <stdio.h>

float discount(float price, int percentage);
int main(void)
{
    float regular = get_float("Regular price: ");
    int percentage_off = get_int("Percentage off: ");
    float sale = discount(regular, percentage_off);
    printf("Sales print: %.2f\n", sale);
}

float discount(float price, int percentage)
{
    return price * (100 - percentage) / 100;
}