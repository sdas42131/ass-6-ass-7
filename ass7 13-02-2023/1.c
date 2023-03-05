// 1.	Write a program, which will print last digits of all factors. Input 385 output 5 7 1 5 5 7 5.

#include<stdio.h>
int main(){
    int num;
    printf("Enter the num: ");
    scanf("%d", &num);

    for(int i = 2; i <= num; i++){
        if (num%i == 0)
            printf("%d ", i%10);
    }
}