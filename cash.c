#include <stdio.h>
#include <cs50.h>

int main(void)
{
    float x = get_float("Change Owed: ");
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int e = 0;
    int count = 0;
    int money;



    money = x * 100;

    if(money >= 25)
    {
    a = money / 25;
    money = money % 25;
    }
    else
    {
        e++;
    }
    if(money >= 10)
    {
    b = money / 10;
        money = money % 10;
    }
    else
    {
        e++;
    }
    if(money >= 5)
    {
    c = money / 5;
        money = money % 5;
    }
    else
    {
        e++;
    }

    d = money;

    count = a + b + c + d;

    printf("Coins Used : %d\n",count);
}