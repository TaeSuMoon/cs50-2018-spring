#include <stdio.h>
#include <ctype.h>
#include <cs50.h>

int length(string a);
int numbering(int a);
int encode(int a, int b);

int main(int argc, string argv[])
{
    int tem=0;
    int len_k;
    if (argc == 2)
    {
        len_k = length(argv[1]);
        for (int i=0; i < len_k; i++)
        {
            if (isalpha(argv[1][i]))
            {
                tem++;
            }
        }
    }
    else
    {
        printf("Usage: ./vigenere k\n");

        return 0;
    }


    if (tem==len_k)
    {
        string before = get_string("plaintext: ");

        int len_b = length(before);

        int key_num[100] = {0,};
        for (int i = 0; i < len_k; i++)
        {
            key_num[i] = numbering(argv[1][i]);
        }
        string after = calloc(len_b+1, sizeof(char));
        int j = 0;
        for (int i = 0; i < len_b; i++)
        {
            if ((before[i]>54 && before[i]<90) || (before[i]>96 && before[i]<123))
            {
                after[i]=encode(before[i], key_num[(j % len_k)]);
                j++;
            }
            else
            {
                after[i] = before[i];
            }
        }
        printf("cipertext: %s\n", after);

        return 0;
    }
    else
    {
        printf("Usage: ./vigenere k\n");
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

int numbering(int a)
{
    if (a>64 && a<91)
    {
        return a % 65;
    }
    else if (a>96 && a<123)
    {
        return a % 97;
    }
    else
    {
        return 0;
    }
}

int encode(int a, int k)
{
    int tem = 0;

    if (a<93)
    {
        a = a % 65;
        tem = 65;
    }
    else
    {
        a = a % 97;
        tem = 97;
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