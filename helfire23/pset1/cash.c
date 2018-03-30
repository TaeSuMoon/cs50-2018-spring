#include <stdio.h>
#include <cs50.h>

int main(void)
{
    float changeowed;
    do
    {
        changeowed = get_float("change owed : ");
    }
    while (changeowed < 0);

    int CNT = 0;
    int change = changeowed * 100;

    if (change >= 25)
    {
        change = change - 25;
        CNT = CNT + 1;
    }
    if (change >= 10)
    {
        change = change - 10;
        CNT = CNT + 1;
    }
    if (change >= 5)
    {
        change = change - 5;
        CNT = CNT + 1;
    }
    if (change >= 1)
    {
        change = change - 1;
        CNT = CNT + 1;
    }
    {
        printf("%d\n", CNT);
    }
}