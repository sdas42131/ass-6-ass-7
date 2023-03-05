// 16.	Write a program to print the last even digit of a number. e.g. input 23613 output 6.                      

#include<stdio.h>
#include<math.h>
int main(){
    int num;
    printf("Enter num: ");
    scanf("%d", &num);
    while (num > 0){
        if ((num%10)%2 == 0){
            printf("%d", num%10);
            break;
        }
        num = num/10;
    }
}