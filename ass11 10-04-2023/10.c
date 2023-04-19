#include<stdio.h>
int nd(int num){
    int dig = 0;
    while (num > 0){
        dig++;
        num = num / 10;
    }
    return dig;
}

int main(){
    printf("%d", nd(23145));
}