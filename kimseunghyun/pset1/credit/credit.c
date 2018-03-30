#include <stdio.h>
#include <cs50.h>

void output(int n, int d);
int length(long long int n);

int main(void)
{
    int number = get_int("number: ");
    int digit;
    int l = length(number);

   do
   {
        digit = get_int("몇번째 digit?: ");
   }while(digit > l || digit ==0);

    output(number, digit);
}

void output(int number,int digit)
{
  int l = length(number);

      for(int i=0; i < l-digit; i++)
      {
           number /= 10;
      }
          number %= 10;

  printf("%i\n", number);
}

int length(long long int n)
{
    int counter = 0;
    while (n != 0)
    {
        counter ++;
        n /= 10;
    }
    return counter;
}