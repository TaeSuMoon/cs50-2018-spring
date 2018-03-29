#include <stdio.h>
#include <cs50.h>
int count = 0, temp;
float num;

int main()
{
    do
    {
    num = get_float("Change owed : ");
    }
    while(num < 0);
    num = num * 100;
    if(num >= 25)
    {
        temp = num / 25;
        count += temp;
        num -= temp * 25;
        temp = 0;
    }
    if(num >= 10)
    {
        temp = num / 10;
        count += temp;
        num -= temp * 10;
        temp = 0;
    }
    if(num >= 5)
    {
        temp = num / 5;
        count += temp;
        num -= temp * 5;
        temp = 0;
    }
    if(num >= 1)
    {
        count += num;
    }
    printf("%d\n", count);
}

