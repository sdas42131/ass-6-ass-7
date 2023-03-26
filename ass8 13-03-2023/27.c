#include<stdio.h>
int main(){
    int count = 1;
    for (int i = 1; i <= 5; i++){
        int k = 65;
        for (int j = 1; j <= count; j++){
            printf("%c", k);
            k+=2;
        }
        printf("\n");
        count++;
    }
}