#include<stdio.h>
int main(){
    int count = 1;
    for (int i = 1; i <= 5; i++){
        for (int j = 1; j <= i; j++){
            printf("A");
        }
        for (int k = 1; k <= 5-count; k++){
            printf("X");
        }
        printf("\n");
        count++;
    }
}