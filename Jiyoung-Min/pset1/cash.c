#include <stdio.h>
#include <cs50.h>

int main(void)
{
    float Change_owed;
    do
    {
        Change_owed = get_float("Change owed: ");
    }
    while (Change_owed < 0);

    // Convert dollars to cents
    int Cents = Change_owed * 100;

    // Perform changes
    int Quarters = Cents / 25;
    int Quarters_l = Cents % 25;

    int Dimes = Quarters_l / 10;
    int Dimes_l = Quarters_l % 10;

    int Nickels = Dimes_l / 5;
    int Nickels_l = Dimes_l % 5;

    int Pennies = Nickels_l / 1;

    int sum = Quarters + Dimes + Nickels + Pennies;

    printf("%i\n", sum);
}