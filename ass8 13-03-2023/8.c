#include<stdio.h>
int main(){
    for (int i = 65; i <= 69; i++){
        for (int j = i; j <= 69; j++){
            printf("%c", j);
        }
        printf("\n");
    }
}