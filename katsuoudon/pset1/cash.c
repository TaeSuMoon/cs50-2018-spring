#include<stdio.h>
#include<cs50.h>

int main(void)
{
    float change_in_dollars = get_float("change owed($):");

//convert dollars to cents
    int change_in_cents = (int)100*change_in_dollars;
    int number;


        number = change_in_cents / 100;

        number = number + change_in_cents %100 / 50;

        number = number + change_in_cents %100 %50 /25;

        number = number + change_in_cents %100 %50 %25 / 10;

        number = number + change_in_cents %100 %50 %25 %10 / 5;

        number = number + change_in_cents %100 %50 %25 %10 %5;

    printf("%i\n", number);
}