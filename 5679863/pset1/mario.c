#include <stdio.h>
#include <cs50.h>
int main()
{
    int height = get_int("Height: ");
    for(int i=1;i<=height;i++)
    {   for(int n=1;n<=height-i;n++)
            printf(" ");
        for(int n=1;n<=i;n++)
            printf("#");
        printf(" ");
        for(int n=1;n<=i;n++)
            printf("#");
        printf("\n");
    }
    return 0;
}