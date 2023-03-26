// 11.	Write program, which will print all numbers, which are either a multiple of 3 or 5 but not both.

#include<stdio.h>
int main(){
    int n = 1;
    while (n > 0){
        if((n%3 != 0 && n%5 == 0) || (n%3 == 0 && n%5 != 0))
            printf("%d ", n);
        n++;
    }}