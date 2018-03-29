#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int a = get_int("-1<hight<24\n");

    if(a>-1 && a<24)
    {
            for(int i = 0; i < a; i++)
        {
            int j;

            for(j = 0; j < a-i-1; j++)
            {
                printf(" ");
            }
            for(; j < a+1; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
}