#include <stdio.h>
#include "cs50.h"

int main(void)
{

    char *n = "Atanda";

    printf("%p\n", n);
    printf("%p\n", &n[0]);
    printf("%p\n", &n[1]);
    printf("%p\n", &n[2]);
    printf("%p\n", &n[3]);
    printf("%p\n", &n[4]);
    printf("%p\n", &n[5]);
    printf("%p\n", &n[6]);
    printf("%p\n", &n[7]);
    printf("%p\n", &n[8]);
}