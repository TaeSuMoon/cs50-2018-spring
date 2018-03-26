#include<stdio.h>
#include<cs50.h>
int main(void)
{
    int n;
    //while(n<=0) will be logically ~good because variable n isn't assigned
    //do while is better in this context


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