#include <stdio.h>
#include <cs50.h>

void print(char c, int i);

int main(void)
{
    int stair;
    do
    {
        stair = get_int("stair : ");
    }
    while (stair < 1 || stair > 23);

    for (int i = 1; i <= stair; i++)
    {
        print(' ', stair - i);
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
