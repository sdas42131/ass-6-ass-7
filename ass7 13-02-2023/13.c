// 13.	Write program, which reads two numbers and finds the sum of smallest factors. e.g. input number 35 and 21 output 5+3=8.

#include<stdio.h>
int main(){
    int num1, num2, count = 0, s = 0, factor1, factor2;
    printf("Enter the num1: ");
    scanf("%d", &num1);
    printf("Enter the num2: ");
    scanf("%d", &num2);

    for(int i = 2; i <= num1; i++){
        if (num1%i == 0){
            factor1 = i;
            break;
        }
    }

    for(int i = 2; i <= num2; i++){
        if (num2%i == 0){
            factor2 = i;
            break;
        }
    }
    
    printf("%d", factor1 + factor2);
}