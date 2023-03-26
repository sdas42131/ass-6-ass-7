#include<stdio.h>
int main(){
    for (int i = 1; i <= 15; i+=3){
        for (int j = 1; j <= i; j++){
            printf("A");
        }
        printf("\n");
    }
}