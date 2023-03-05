// 23.	Write a program to find sum of numbers formed by exchanging consecutive digits. Input 2415 output: 42+14+51=107.


#include<stdio.h>
#include<math.h>
int main(){
    int num, k, s = 0, num_old, mul, org;
    printf("Enter num: ");
    scanf("%d", &num);
    num_old = num;
    while (num/10 != 0){
        org = num%100;
        s = s + ((org%10)*10)+ (org/10);
        num = num/10;
    }
    
    printf("output: %d", s);
}