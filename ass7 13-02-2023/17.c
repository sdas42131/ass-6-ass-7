// 17.	Modify the above program to print the smallest common factor. Input 24, 15 output 3.

#include<stdio.h>
int main(){
    int num1, num2, count = 0, s = 0, factor1, factor2;
    printf("Enter the num1: ");
    scanf("%d", &num1);
    printf("Enter the num2: ");
    scanf("%d", &num2);

    for(int i = 2; i <= num2; i++){
        if (num1%i == 0 && num2%i == 0){
            printf("%d ", i);
            break;
        }
    }
}