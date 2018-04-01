#include<stdio.h>
#include<cs50.h>
#include<string.h>

int main(void)
{
    string message = get_string("your message: ");

    for(int i = 0, n = strlen(message); i < n; i++)
    {
        if(( 'a' <= message[i] && message[i] <= 'y') || ('A' <= message[i] &&  message[i]<= 'Y'))
        {
            message[i]++;

        }
        else if(message[i] == 'z')
        {
            message[i] = 'a';
        }
        else if(message[i] == 'Z')
        {
            message[i] = 'A';
        }
        printf("%c",message[i]);

    }
    printf("\n");
}