// 17.	Write a Program to print the digit immediately before the last even digit.     input 23613 output 3 

#include<stdio.h>
#include<math.h>
int main(){
    int num;
    printf("Enter num: ");
    scanf("%d", &num);
    while (num > 0){
        if ((num%10)%2 == 0){
            printf("%d", (num%100)/10);
            break;
        }
        num = num/10;
    }
}