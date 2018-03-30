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

