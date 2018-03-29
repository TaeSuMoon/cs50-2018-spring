#include <stdio.h>
#include <cs50.h>

int print(int a, char b[]);
int main(void)
{
    int a = get_int("-1<hight<24\n");

    if(a>-1 && a<24)
    {
        for(int k=1; k<a+1; k++)
        {
            print(a-k, " ");
            print(k, "#");
            print(2, " ");
            print(k, "#");
            print(a-k, " ");
            printf("\n");
        }
    }
}

int print(int a, char b[])
{
    for(int i=0; i<a; i++)
    {
        printf("%c", b[0]);
    }
    return 0;
}