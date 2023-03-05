// 31.	Write a program to print the digit immediately before the first even digit. e.g. input 71236 output 1.

#include<stdio.h>
#include<math.h>
int main(){
    int num, dig;
    printf("Enter number: ");
    scanf("%d", &num);

    while (num > 0){
        if ((num%10)%2 == 0)
            dig = (num/10)%10;
        
        num = num/10;
    }

    printf("output: %d", dig);
}