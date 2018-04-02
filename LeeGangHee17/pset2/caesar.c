#include <stdio.h>
#include <cs50.h>

int length(string a);
int number(string a);
int encode(int a, int b);

int main(int argc, string argv[])
{
    if (argc==2)
    {

        string before = get_string("plaintext: ");
        int len = length(before);

        int key = number(argv[1]) % 26;
        string after = calloc(len+1, sizeof(char));

        for (int i = 0; i < len; i++)
        {
           after[i]=encode(before[i], key);
        }

        printf("ciphertext: %s\n", after);

        return 0;
    }
    else
    {
        printf("Usage: ./caesar k\n");
    }
}

int length(string a)
{
    int i = 0;

    while (!(a[i] == '\0'))
    {
        i++;
    }
    return i;
}

int number(string a)
{
    int num=0;
    for (int i=0, len=length(a); i<len; i++)
    {
        int tem=1;
        for (int j=0; j<len-i-1; j++)
        {
            tem=tem*10;
        }
        num=num+tem*(a[i]-48);
    }
    return num;
}

int encode(int a, int k)
{
    int tem = 0;

    if (a>64 && a<91)
    {
        a = a % 65;
        tem = 65;
    }
    else if (a>96 && a<123)
    {
        a = a % 97;
        tem = 97;
    }
    else
    {
        return a;
    }

    if (a < 26 - k)
    {
        return a + k + tem;
    }
    else
    {
        return a + k + tem - 26;
    }
}