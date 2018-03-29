#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height = get_int("height: ");

    if (-1<height && height <24)
    {
        for (int i = 0; i < height; i++)
        {
            for (int n = 0; n < height -i -1 ; n++)
            {
                printf(" ");
            }
            for (int x = 0; x < i + 2; x++)
            {
                printf("#");
            }
        printf("\n");
        }
    }

    return 0;
}