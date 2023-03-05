// 24.	Write a program to print the first even digit of a number form first. e.g. input 71236 output 2.

#include<stdio.h>
int main(){
    int num, even;
    printf("Enter number; ");
    scanf("%d", &num);

    while (num > 0){
        if ((num%10)%2 == 0)
            even = num%10;

        num = num/10;
    }

    printf("output: %d", even);
    
}