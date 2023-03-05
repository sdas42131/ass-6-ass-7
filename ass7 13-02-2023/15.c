// 15.	Write program, which reads two numbers and prints all common factors. If given numbers are 24 and 54 then outputs are 2, 3 and 6.

#include<stdio.h>
int main(){
    int num1, num2;
    printf("Enter the num1: ");
    scanf("%d", &num1);
    printf("Enter the num2: ");
    scanf("%d", &num2);

    for(int i = 2; i <= num2; i++){
        if (num1%i == 0 && num2%i == 0){
            printf("%d ", i);
        }
    }
}