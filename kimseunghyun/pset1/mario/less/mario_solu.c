#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n= get_int ("Enter the height of the pyramid\n");

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n-i; j++)
        {
             printf(" ");
        }

        for(int k=1; k<=2*i; k++)
        {
            printf("#");
        }
    printf("\n");
    }
}