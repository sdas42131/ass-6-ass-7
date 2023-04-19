#include<stdio.h>

int fd(int num){
    int firstDigit = num;
    while (firstDigit >= 10){
        firstDigit = firstDigit / 10;
    }
    return firstDigit;
}

int main(){
    printf("%d", fd(23145));
}