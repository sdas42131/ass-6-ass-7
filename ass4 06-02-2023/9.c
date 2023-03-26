// 9.	Write program, which will print all numbers which are either between 50 and 70, or less than 20, or more than 90.

#include<stdio.h>
int main(){
    int n = 20, i;
    printf("Numbers either bw 50 and 70 or less than 20 or more than 90: \n");
    while (n >= 0)
    {
        if((n >= 50 && n < 70) || n < 20 || n > 90)
            printf("%d ", n);
        n++;
    }
    
}