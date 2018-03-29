#include <cs50.h>
#include <stdio.h>

int main(void)
{
    float n = get_float(" ");
    int x = (n * 100);
    int a = x%25;
    int v = x/25;
    while ( a> 0)
    {
        int b = a%10;
        int j = a/10;
        while ( b>0)
        {
            int c = b%5;
            int s = b/5;
            int d = v + j + s + c;
            printf("%i\n", d);
            return 0;
        }
    }
}