#include<stdio.h>
int main(){
    for (int i = 10; i >= 2; i-=2){
        for (int j = 1; j <= i; j++){
            printf("A");
        }
        printf("\n");
    }
}