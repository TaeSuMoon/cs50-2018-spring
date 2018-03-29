#include <stdio.h>
#include <cs50.h>

int length(long a); /*숫자의 길이 구하는 함수*/
int main(void)
{
    long num;
    int arraynum[20]={0,};
    num = get_long("card number:");

    int len = length(num);
    int i;
    int sum=0;
    /*숫자를 배열화*/
    for(i = 0; i<len; i++)
    {
        arraynum[len-i-1]=num % 10;
        num = (num - (num % 10))/10;
    }

    /*유효한 카드인지 판단*/
    for(i=0; i<len; i++)
    {
        if((i+1)%2==0)
        {
            int k=2*arraynum[len-i-1];
            if(arraynum[len-i-1]<5)
            {
                sum=sum+k;
            }
            else
            {
                sum=sum+k%10+(k-k%10)/10;
            }
        }
        else
        {
            sum=sum+arraynum[len-i-1];
        }
    }
    printf("%d\n", sum);

    /*카드사 판단-카드번호 유효성*/
    if(!((sum%10)==0))
    {
        printf("INVALID\n");
        return 0;
    }

    /*카드사 판단-자릿수-첫 숫자*/
    int fn=10*arraynum[0]+arraynum[1];
    switch(len)
    {
        case 13:
            if(arraynum[0]==4)
            {
                printf("VISA\n");
                return 0;
            }
            else
            {

            printf("INVALID/n");
            return 0;
            }
        case 15:
            if(fn==34||fn==37)
            {
                printf("AMEX\n");
                return 0;
            }
            else
            {

            printf("INVALID/n");
            return 0;
            }
        case 16:
            if(fn==34||fn==37)
            {
                printf("AMEX\n");
                return 0;
            }
            else if(fn>=51 && fn<=55)
            {
                printf("MASTERCARD\n");
                return 0;
            }
            else
            {

            printf("INVALID/n");
            return 0;
            }

    }

}
int length(long a)
{
    int i = 0;

    while(a>0)
    {
        a = (a - (a%10))/10;
        i++;
    }

    return i;
}