// 17.	Write program, which will print all even numbers between 10 and 19, 30 and 39, … , 90 and 99.

#include<stdio.h>
int main(){
    int n = 1;
    while (n < 100){
        if (((n/10)%2) == 1 && n%2 == 0)
            printf("%d ", n);
        n++;
    }
}