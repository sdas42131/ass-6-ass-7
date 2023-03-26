// 14.	Write program, which will print those numbers whose sum of both digits is multiple of 7. e.g. 0,7,16, 25, 34, 43, 52, 59, 61, 68, 70, 77, 86, 95.

#include<stdio.h>
int main(){
    int n = 1;
    while (n < 100){
        if (((n%10) + (n/10)%10)%7 == 0)
            printf("%d ", n);
        n++;
    }
}