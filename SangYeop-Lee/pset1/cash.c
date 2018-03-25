#include <stdio.h>
#include <cs50.h>

int main(void)
{
    float change_d;
    do
    {
        change_d = get_float("Change owed: ");
    } while (change_d < 0);
    
    int change_c = change_d*100;
    int counter = 0;
    
    if(change_c > 25)
    {
        counter += change_c/25;
        change_c %= 25;
    }
    
    if(change_c > 10)
    {
        counter += change_c/10;
        change_c %= 10;
    }
    
    if(change_c > 5)
    {
        counter += change_c/5;
        change_c %= 5;
    }
    
    counter += change_c;
    
    printf("%d\n",counter);
    
}