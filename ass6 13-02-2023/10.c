// 10.	Write a program, which will find sum of product of consecutive digits of a number. e.g. when the input is 23145 the output is 2x3 + 3x1 + 1x4 + 4x5 = 33. Input 754 output 55. 

#include<stdio.h>
#include<math.h>
int main(){
    int num, k, s = 0, num_old, mul;
    printf("Enter num: ");
    scanf("%d", &num);
    num_old = num;
    while (num > 0){
        mul = (((num%100)/10) * (num%10));
        s = s + mul;
        num = num/10;
    }
    
    printf("output: %d", s);
}