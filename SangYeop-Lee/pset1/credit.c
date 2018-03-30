#include <stdio.h>
#include <cs50.h>

bool check(long long int n);
int length(long long int n);
int digit_value(long long int n, int i);

int main(void)
{
    long long int Num = get_long_long("Number: ");
    if (!check(Num))
    {
        printf("INVALID\n");
        return 0;
    }

    if ((digit_value(Num, 2) == 34 || digit_value(Num, 2) == 37) && length(Num) == 15)
    {
        printf("AMEX\n");
    }
    else if ((digit_value(Num, 2) > 50 && digit_value(Num, 2) <= 55) && length(Num) == 16)
    {
        printf("MASTERCARD\n");
    }
    else if ((digit_value(Num, 1) == 4) && length(Num) == 16)
    {
        printf("VISA\n");
    }
    else
    {
        printf("INVALID\n");
    }

    return 0;
}

bool check(long long int n)
{
    int sum = 0;
    int x;
    int j = length(n);
    for (int i = 0; i < j; i++)
    {
        if (i % 2 == 0)
        {
            x = n % 10;
            sum += x;
        }
        else
        {
            x = (n % 10) * 2;
            sum += x % 10 + x / 10;
        }
        n /= 10;
    }

    if (sum % 10 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int length(long long int n)
{
    int counter = 0;
    while (n != 0)
    {
        counter ++;
        n /= 10;
    }
    return counter;
}

int digit_value(long long int n, int i)
{
    int j = length(n);
    for (int k = 0; k < j - i; k++)
    {
        n /= 10;
    }
    return n;
}