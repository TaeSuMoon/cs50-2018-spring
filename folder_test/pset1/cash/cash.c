#include<stdio.h>
#include<cs50.h>

int main(void)
{
    //float change_in_dollars = get_float("change owed($):");
    float change_in_dollars;
    do
    {
      change_in_dollars = get_float("change owed($): ");
    }
    while(0 < change_in_dollars < 1.00);

//convert dollars to cents
    int change_in_cents = (int)100*change_in_dollars;
    int count;

        count = change_in_cents / 100;

        count = change_in_cents %100 / 25;

        count = count + change_in_cents %100 %25 / 10;

        count = count + change_in_cents %100 %25 %10 /5;

        count = count + change_in_cents %100 %25 %10 %5 / 1;

        count = count + change_in_cents %100 %25 %10 %5 %1;

    printf("%i\n", count);
}