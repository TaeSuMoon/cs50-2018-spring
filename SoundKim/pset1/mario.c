#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height = get_int("Height: ");
    while(height<0 || height>23){
        height = get_int("Height: ");
    }
    int i,j;

    for(i=0;i<height;i++){
        for(j=height-1-i;j>0;j--){
            printf(" ");
        }
        for(j=0;j<i+2;j++){
            printf("#");
        }
        printf("\n");
    }
}