// 19.	Write a program to print the last digit of an integer number, which is multiple of 3. e.g. input 23617 output 6.

#include<stdio.h>
#include<math.h>
int main(){
    int num;
    printf("Enter num: ");
    scanf("%d", &num);
    while (num > 0){
        if ((num%10)%3 == 0){
            printf("%d", num%10);
            break;
        }
        num = num/10;
    }
}