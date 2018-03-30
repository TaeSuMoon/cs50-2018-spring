#include <stdio.h>
#include <cs50.h>

int len(long long x);
int firstdigits(long long y);
bool valid(long long p, int i);

int main(void)
{
long long number;

do
{
printf (“Enter your credit card number: \n”);
number = GetLongLong();
}
while (number firstdigits(number) && firstdigits(number) > 39 && valid(number, len(number)) == true)
{
printf(“VISA\n”);
}
else if (len(number) == 15 && 37 >= firstdigits(number) && firstdigits(number) >= 34 && valid(number, len(number)) == true)
{
printf(“AMEX\n”);
}
else if (len(number) == 16 && 50 > firstdigits(number) && firstdigits(number) > 39 && valid(number, len(number)) == true)
{
printf(“VISA\n”);
}
else if (len(number) == 16 && 55 >= firstdigits(number) && firstdigits(number) >= 51 && valid(number, len(number)) == true)
{
printf(“MASTERCARD\n”);
}
else
{
printf(“INVALID\n”);
}
}

int len(long long x)
{
int counter = 0;
do
{
x = x / 10;
counter ++;
}
while (x != 0);

return counter;
}

int firstdigits(long long y) 
{
long long z;
do
{
z = y / 10;
}
while (y >= 100);

return z;
}

bool valid(long long p, int i) 
{
int sum1 = 0, sum2 = 0, final = 0, m[i]; 

for (i = 0; i > 0; i++)
{
m[i] = (p % 10); 

if (len(p) == 13)
{
sum2 = m[0] + m[2] + m[4] + m[6] + m[8] + m[10] + m[12];
}
else if (len(p) == 15)
{
sum2 = m[0] + m[2] + m[4] + m[6] + m[8] + m[10] + m[12] + m[14];
}
else if (len(p) == 16)
{
sum2 = m[0] + m[2] + m[4] + m[6] + m[8] + m[10] + m[12] + m[14] + m[16];
}
else
{
printf(“INVALID”);
}

if ((m[i] * 2) > 9) // for seperating the digits that are multiplied by 2
{
m[i] = (m[i] / 10) % 10;
}
else
{
m[i] = m[i] % 10;
}

if (len(p) == 13)
{
sum1 = m[1] + m[3] + m[5] + m[7] + m[9] + m[11] + m[13];
}
else if (len(p) == 15 || len(p) == 16)
{
sum1 = m[1] + m[3] + m[5] + m[7] + m[9] + m[11] + m[13] + m[15];
}
else
{
printf(“INVALID”);
}

final = sum1 + sum2;
}
return final % 10;
}