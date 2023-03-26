#include<stdio.h>
int main(){
    int count = 5;
    for (int i = 65; i <= 69; i++){
        for (int j = 1; j <= count; j++){
            printf("%c", i);
        }
        count--;
    }
}