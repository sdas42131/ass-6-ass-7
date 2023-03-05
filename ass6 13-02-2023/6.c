// 6.	Write a program to print first digit. e.g. input 23617 output 2. Input 714 output 7.

#include<stdio.h>
#include<math.h>
int main(){
    int num, k, count = 0, num_old;
    printf("Enter num: ");
    scanf("%d", &num);
    num_old = num;
    while (num > 0)
    {
        num = num/10;
        count++;
    }
    
    printf("output: %d", (int)(num_old/pow(10, count-1)));
}