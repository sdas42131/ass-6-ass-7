// 14.	Write program, which reads a number. Let ‘t’ be its smallest factor. The program finds the smallest factor of t+2. e.g. input 77 output 3 (since smallest factor of 77 is 7 and smallest factor of 7+2 is 3). Input 55 output 7.

#include<stdio.h>
int main(){
    int num, factor;
    printf("Enter the num1: ");
    scanf("%d", &num);

    for(int i = 2; i < num; i++){
        if (num%i == 0){
            factor = i;
            break;
        }
    }

    for(int i = 2; i < factor + 2; i++){
        if ((factor + 2)%i == 0){
            printf("%d ", i);
            break;
        }
    }
}