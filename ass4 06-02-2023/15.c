// 15.	Write program, which will print all numbers between 10 and 19, 30 and 39, 50 and 59,  … , 90 and 99. [Hint: check condition ((x/10)%2) == 1].

#include<stdio.h>
int main(){
    int n = 1;
    while (n < 100){
        if (((n/10)%2) == 1)
            printf("%d ", n);
        n++;
    }
}