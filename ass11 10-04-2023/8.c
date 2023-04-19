#include<stdio.h>

int loc(int num){
    int dig;
    while (num > 0){
        if((num%10)%3 == 0)
            dig = num%10;
        num = num / 10;
    }
    return dig;
}

int main(){
    printf("%d", loc(23145));
}