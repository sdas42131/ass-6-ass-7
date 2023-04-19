#include<stdio.h>

int sfs(int num){
    int firstDigit = num, secondDigit;
    while (firstDigit >= 10){
        secondDigit = firstDigit;
        firstDigit = firstDigit / 10;
    }
    return firstDigit + (secondDigit%10);
}

int main(){
    printf("%d", sfs(23145));
}