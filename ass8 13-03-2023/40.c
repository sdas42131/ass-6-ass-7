#include<stdio.h>
int main(){
    int count = 1, k =65;
    for (int i = 65; i <= 71; i++){
        for (int j = i; j <= 70; j++){
            printf("%c", j);
        }
        printf("\n");
        count++;
    }
}