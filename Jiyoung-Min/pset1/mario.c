#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int Height;
    do
    {
        Height = get_int("Height: ");
    }
    while (Height < 1 || Height > 23);

    //print # n times
    for (int i = 0; i < Height; i++)
    {
        for (int j = 0; j < i+2; j++)
        {
            printf("#");
        }
        printf("\n");
    }

}