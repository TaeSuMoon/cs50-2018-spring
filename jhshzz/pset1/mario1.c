#include <stdio.h>
#include <cs50.h>

void Print(char, int);
int HEIGHT, j, k;

int main()
{
    do
    {
        HEIGHT = get_int("HEIGHT : ");
    }
    while(HEIGHT < 1);
    for(int i = 1; i <= HEIGHT; i++)
    {
        Print('a', HEIGHT - i);
        Print('b', i);
        printf("  ");
        Print('b', i);
        Print('a', HEIGHT - i);
        printf("\n");
    }
}

void Print(char c, int i){
    for(j = 1; j <= i; j++)
    {
        if(c == 'a'){
            printf(" ");
        }
        else if(c == 'b'){
            printf("#");
        }
    }
}
