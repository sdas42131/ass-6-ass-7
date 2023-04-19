#include<stdio.h>

int loc(int num){
    int even;
    while (num > 0){
        if((num%10)%2 == 0)
            even = num%10;
        num = num / 10;
    }
    return even;
}

int main(){
    printf("%d", loc(23145));
}