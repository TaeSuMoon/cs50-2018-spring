#include <stdio.h>
#include <cs50.h>


int main(void)
{
    int height = get_int("height: ");
    int a, b;

    if(24>height>0)
    {
        for(int i = 0; i<height; i++)
        {
            for(a = 0; a<-i+height-1; a++ )
            {
            printf(" ");
            }
            for(b = 0; b>-i-1; b-- )
            {
                printf("#");
            }
            printf("#\n");
        }
    }
    else
    {
        printf("It is too big\n");
    }
}