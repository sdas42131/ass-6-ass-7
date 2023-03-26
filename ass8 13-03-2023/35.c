#include<stdio.h>
int main(){
    int count = 1;
    for (int i = 65; i <= 69; i++){
        for (int j = 1; j <= count; j++){
            printf("A");
        }
        for (int k = 1; k <= 5 - count; k++){
            printf("X");
        }
        count++;
    }
}