#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n; //n is height, i is row. row starts from 0.
    //int i;
    //int j; //j is number of blank spaces in each row
    //int k; //number of hashes

    do
    {
      n = get_int("height: "); //prompt the user for valid integer
    }
    while(n>23 || n<0); //if the while condition is invalid, we execute the do statement till while condition is unsatisfied

   for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n-i; j++)
        {
             printf(" ");
        }

        for(int k=1; k<=i+1; k++)
        {
            printf("#");
        }

        printf("  ");

        for(int k=1; k<=i+1; k++)
        {
            printf("#");
        }

    printf("\n");
    }
}