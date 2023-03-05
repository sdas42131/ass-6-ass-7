// 19.	Write program, which reads a number and prints all factors using ‘while’ (in place of ‘for’).

#include<stdio.h>
int main(){
    int num, i = 1;
    printf("Enter the num: ");
    scanf("%d", &num);

    while (i <= num){
        if(num%i == 0){
            printf("%d ", i);
        }
        i++;
    }
}