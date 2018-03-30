#include <stdio.h>
#include <cs50.h>

int main(void)
{


    int Height = get_int("Height: ");
    int i;
    int j;
    int k;

    if(Height < 23 && Height > 0)
    {
     for(i = 1; i < Height + 1; i++)
    {
        for(j = 0; j < Height - i ; j++)
        {
            printf(" ");
        }
        for(k = 0; k < Height - j + 1; k++)
        {
            printf("#");
        }

    printf("\n");
    }
    }
}