// 18.	Write a program to print the digit immediately after the last even digit of a number. input 23613 output 1 


#include<stdio.h>
#include<math.h>
int main(){
    int num;
    printf("Enter num: ");
    scanf("%d", &num);
    while (num > 0){
        if (((num%100)/10)%2 == 0){
            printf("%d", num%10);
            break;
        }
        num = num/10;
    }
}