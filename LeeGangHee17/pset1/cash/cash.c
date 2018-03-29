#include <stdio.h>
#include <cs50.h>

int main(void)
{
    float a = get_float();

    int coin = 0;

    int b = a * 100;
    b=b % 100;
    for(; b>=25; b=b-25)
    {
        coin++;
    }
    for(; b>=10; b=b-10)
    {
        coin++;
    }
    for(; b>=5; b=b-5)
    {
        coin++;
    }
    for(; b>=1; b--)
    {
        coin++;
    }

    printf("%d\n", coin);
    return 0;
}