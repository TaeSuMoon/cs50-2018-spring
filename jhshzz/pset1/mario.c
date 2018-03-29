#include<stdio.h>
#include<cs50.h>
int main(void)
{
    int n;


    do
    {
        eprintf("about to promt user for a number\n");
        n = get_int("Positive Number:");
    }
    while(n < 0);

    for(int i = 0; i < n; i++)
    {
    //print that many rows
        for(int j=0; j < n; j++)
        { // print that many coloums
            printf("#");
        }

        printf("\n");
    }

}