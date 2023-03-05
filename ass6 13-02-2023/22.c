// 22.	Write a program, which finds the sum of numbers formed by consecutive digits of an integer number. Input 2415 output 24+41+15=80.

#include<stdio.h>
#include<math.h>
int main(){
    int num, k, s = 0, num_old, mul;
    printf("Enter num: ");
    scanf("%d", &num);
    num_old = num;
    while (num/10 != 0){
        s = s + num%100;
        num = num/10;
    }
    
    printf("output: %d", s);
}