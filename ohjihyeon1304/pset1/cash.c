#include <stdio.h>
#include <cs50.h>
#include <math.h>


int main(void)
{

    float input;
    int number = 0;

    do
    {
        input = get_float("The change owed: ");
    }
    while (input<0);

    int change = round(100*input);

    if (change > 25)
    {
        number = number + change/25;
        change = change % 25;
    }
    if (change > 10)
    {
        number = number + change/10;
        change = change % 10;
    }
    if (change > 5)
    {
        number = number + change/5;
        change = change % 5;
    }
    number = number + change;
    printf("%d\n",number);
}