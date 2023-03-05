// 25.	Write a program to print digits, which are multiple of 3 of a number. e.g. input 23617 output 6,3.


#include<stdio.h>
int main(){
    int num, even;
    printf("Enter number; ");
    scanf("%d", &num);

    while (num > 0){
        if ((num%10)%3 == 0)
            printf("output: %d\n", num%10);

        num = num/10;
    }
    
}