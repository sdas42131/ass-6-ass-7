// 26.	Write a program, which gives the sum of digits at even location of a integer number. Input 2314 output 3+4=7. Input 72314 output: 7+3+4=14 Input 572314 output 7+3+4=14.

#include<stdio.h>
int main(){
    int num, even, s = 0, location = 0;
    printf("Enter number; ");
    scanf("%d", &num);

    while (num > 0){
        if (location%2 == 0) 
            s = s + (num%10);

        num = num/10;
        location++;
    }
    
    printf("output: %d", s);
}