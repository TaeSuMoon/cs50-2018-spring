#include <stdio.h>
#include <cs50.h>

int main(void){
    float cash = get_float("Change owed: ");
    while(cash<0.0){
        cash = get_float("Change owed: ");
    }
    int cash_int = (int)(cash*100);


    int count = 0;
    while(cash_int>=25){
        cash_int -= 25;
        count++;
    }
    while(cash_int>=10){
        cash_int -=10;
        count++;
    }
    while(cash_int>=5){
        cash_int -= 5;
        count++;
    }
    while(cash_int>0){
        cash_int -=1;
        count++;
    }
    printf("%d\n",count);

}