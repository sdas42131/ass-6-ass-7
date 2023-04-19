#include<stdio.h>

int sd(int num){
    int firstDigit = num, secondDigit;
    while (firstDigit >= 10){
        secondDigit = firstDigit;
        firstDigit = firstDigit / 10;
    }
    return secondDigit%10;
}

int main(){
    printf("%d", sd(23145));
}