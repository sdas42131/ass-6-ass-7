#include<stdio.h>
int main(){
    for (int i = 69; i >= 65; i--){
        for (int j = i; j >= 65; j--){
            printf("%c", j);
        }
        printf("\n");
    }
}