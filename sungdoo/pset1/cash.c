#include <stdio.h>
#include <cs50.h>

int main(void)
{
    float e = get_float("How much dollars, do you have?: ");
    int d=0;

    while(e>=0.25)
    {
    e=e-0.25;
    d++;
    }
    while(e>=0.10)
    {
        e=e-0.1;
        d++;
    }
    while(e>=0.05)
    {
        e=e-0.05;
        d++;
    }
    while(e>=0.01)
    {
        e=e-0.01;
        d++;
    }
    printf("%d\n",d);



}