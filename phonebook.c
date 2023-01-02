#include <stdio.h>
#include "cs50.h"
#include <string.h>

typedef struct
{
    string name;
    string number;
};
person;

int main(void)
{
    person people[2];
    people[0].name = "Atanda";
    people[0].number = "+234-807-142-064-8";

    people[1].name = "0X";
    people[1].number = "+234-903-864-806-8";

    for (int i = 0; i < 2; i++)
    {
        if (strcmp(people[i].name, "0x") == 0)
        {
            printf("Found %s\n", people[i].number);
            return 0;
        }
    }
    printf("Not Found\n");
    return 1;
}