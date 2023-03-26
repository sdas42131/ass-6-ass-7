// 4.	Print all numbers less than 10 and all numbers more than 90.

#include<stdio.h>
int main(){
    int n = 0;
    while (n < 10 || n > 90)
    {
        printf("%d ", n);
        if(n == 9)
            n = n + 82;
        else
            n++;
    }
}