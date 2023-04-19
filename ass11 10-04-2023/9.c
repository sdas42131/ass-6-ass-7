#include<stdio.h>
int loc(int num){
    int big = 0;
    while (num > 0){
        if((num%10) > big)
            big = num%10;
        num = num / 10;
    }
    return big;
}

int main(){
    printf("%d", loc(23145));
}