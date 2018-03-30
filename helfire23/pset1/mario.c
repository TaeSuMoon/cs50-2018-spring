#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int Height;
    do
        {
            Height = get_int("Height : ");
        }
    while (Height < 0 || Height > 23);

    for (int i = 1; i <= Height; i++)
    {
        for (int j = 1; j <= Height-i; j++)
        {
            printf(" ");
        }
        for (int k = 0; k <= i; k++)
        printf("#");
        printf("\n");
    }
}./