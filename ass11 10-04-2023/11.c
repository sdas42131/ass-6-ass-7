#include<stdio.h>
int loc(int num){
    int big = 0, count = 1, location;
    while (num > 0){
        if((num%10) > big){
            big = num%10;
            location = count;
        }
        num = num / 10;
        count++;
    }
    return location;
}

int main(){
    printf("%d", loc(23145));
}