#include <stdio.h>
#include "cs50.h"
#include <string.h>

int main(void){
    int n;
    string hashTag = "#";
    do{
        n = get_int("Size: ");
    }while(n<1 || n>8);

    //for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            int a= n;
            while (a>(j+1))
            {
                printf("#");
                a--;
            }
            printf("%s\n", hashTag);
        }
        //printf("\n");
    //}
}