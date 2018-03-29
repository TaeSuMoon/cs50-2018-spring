#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main()
{   long long card,n;
    card = get_int("enter your card number");
    n = card;
    while(n>100)
    {   n /= 10}

/*int main()
{
    int i,n=0,sum=0;
    char length[];
    string card = get_string("enter card number");
    for (i=0;card[i]!=0;i++)
        {
            if (card[i]!='-')
            {
                length[n]=card[i];
                n++;
            }
        }
    if (length[0]=5&&length[1]>0&&length[1]<6&&strlen(length)==16)
        printf("your card type is Matercard");
    else if (length[0]==4&&(strlen(length)==16||strlen(length)==13))
        printf("your card type is American Express");
    else if (length[0]==3&&(length[1]==4||length[1]==7)&&strlen(length)==15)
        printf("your card type is visa");
    else
    {
        printf("your card number is out of standard");
        sum +=1;}
    if (sum == 0)
    {
        for (i=1;i<=strlen(length);i+=2)
            sum= sum + 2*length[i];
        for (i=0;i<=strlen(length);i+=2)
            sum += length[i];
        if(sum%10 == 0)
            printf("your card is valid");
        else
            printf("your card is valid");
    }
    return 0;
}*/