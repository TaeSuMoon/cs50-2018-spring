#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n = get_int("Height: ");
    while (n<0 || n>23);


    for (int i =0; i<n; i++)
    {
        for (int j=0; j<=n; j++)
        {

            if (i+j<(n-1))
                printf(" ");

            else
                printf("#");


        }

        printf("\n");
    }
}