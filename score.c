#include "cs50.h"
#include <stdio.h>

int main(void)
{
    int n = get_int("How many score in a semster? ");

    int scores[n];

    for (int i = 0; i < n; i++)
    {
        scores[i] = get_int("Scores: ");
    }

    printf("Average: %f\n", (scores[0] + scores[1] + scores[2] / 3.0);
};