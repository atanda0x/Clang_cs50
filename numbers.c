#include <stdio.h>
#include "cs50.h"

int main(void)
{
    int numbers[] = {2, 1, 5, 7, 9, 3, 0};

    for (int i = 0; i < 7; i++)
    {
        if (numbers[i] == 0)
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}