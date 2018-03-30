#include <stdio.h>
#include <cs50.h>

int main(void) {
   
    printf("Height: ");
    int height = GetInt();
    int hm2 = height - 2;

    int j, k;
    for(int i = 1 ; i < height; i++) {
        // create n-1 spaces
        for(k = hm2; k > (i-1); k--)
            printf("%c", ' ');      

        // create n+1 hash tags
        for(j = 0; j < (i+1); j++)
            printf("#");

        printf("\n");
    }
    return 0;
}