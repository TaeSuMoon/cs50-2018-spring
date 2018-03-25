#include <cs50.h>
#include <stdio.h>

void print(char c, int i);

int main(void)
{
    int Height;
    do
    {
        Height = get_int("Height: ");
    }
    while (Height < 1 || Height > 23);

    for (int i = 1; i <= Height; i++)
    {
        print(' ', Height - i);
        print('#', i);
        print(' ', 2);
        print('#', i);
        printf("\n");
    }
}

void print(char c, int i)
{
    for (int j = 0; j < i; j ++)
    {
        printf("%c", c);
    }
}
