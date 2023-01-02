#include <stdio.h>
#include "cs50.h"
#include <string>

int main(void)
{
    string s = get_string("Input:  ");
    printf("Output: ");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        printf("%c", s[1]);
    }
    printf("\n");
}