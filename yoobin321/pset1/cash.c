#include <stdio.h>
#include <cs50.h>

int main()
{
    printf("Change owed: ");
    float m=get_float();

    int coin=0;

    while(m>=1)
    {
        m-=1;
    }
    while (m>=0.25)
    {
        m-=0.25;
        coin++;
    }
    while(m>=0.1)
    {
        m-=0.1;
        coin++;
    }
    while(m>=0.05)
    {
        m-=0.05;
        coin++;
    }
    while(m>=0.01)
    {
        m-=0.01;
        coin++;
    }
    printf("\n%d\n",coin);

}