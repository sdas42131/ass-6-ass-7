#include<stdio.h>
int loc(int num){
    int even, s = 0;
    while (num > 0){
        if((num%10)%2 == 0){
            even = num%10;
            s = s + even;
        }
        num = num / 10;
    }
    return s;
}

int main(){
    printf("%d", loc(23145));
}