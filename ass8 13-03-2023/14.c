#include<stdio.h>
int main(){
    int count = 5;
    for (int i = 69; i >= 65; i--){
        for (int j = 1; j <= count; j++){
            printf("%c", i);
        }
        printf("\n");
        count--;
    }
}