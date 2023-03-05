// 16.	Modify the above program to print the greatest common factor. Input 24 35 output 1. Input 42, 54 output 6.

#include<stdio.h>
int main(){
    int num1, num2, factor;
    printf("Enter the num1: ");
    scanf("%d", &num1);
    printf("Enter the num2: ");
    scanf("%d", &num2);

    for(int i = 2; i <= num2; i++){
        if (num1%i == 0 && num2%i == 0)
            factor = i;
    }

    printf("%d", factor);
}