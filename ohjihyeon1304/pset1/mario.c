#include <stdio.h>
#include <cs50.h>


int main (void)

{
    int height;
    printf ("Height: ");
    do
    {
        height = get_int( );
    }
    while (height < 0 || height > 23);
    for (int i = 0; i < height; i ++)
    {
        for(int j = 0; j < height + 1; j ++)
        {
            if (i + j < (height-1))
            printf(" ");
            else printf("#");
        }
        printf("\n");
    }
}

/*
if (condition = true)
{
    exectue ~ ok
}
*/

