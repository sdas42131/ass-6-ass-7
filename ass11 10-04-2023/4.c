#include<stdio.h>

int td(int num){
    return (num%1000)/100;
}

int main(){
    printf("%d", td(23145));
}