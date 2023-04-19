#include<stdio.h>

int sft(int num){
    int firstDigit = num;
    while (firstDigit >= 10){
        firstDigit = firstDigit / 10;
    }
    return firstDigit + (num%1000)/100;
}

int main(){
    printf("%d", sft(23145));
}