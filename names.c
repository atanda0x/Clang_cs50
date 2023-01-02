#include <stdio.h>
#include "cs50.h"
#include <string.h>

int main(void)
{
    string names[] = {"Atanda",
                      "0x",
                      "Omowunmi",
                      "Lateef",
                      "Fadilah",
                      "Razaq",
                      "Kolapo"};

    for (int i = 0; i < 7; i++)
    {
        if (strcmp(names[i], "0x") == 0)
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not Found\n");
    return 1;
}