// 8.	Write program to print the second digit. input 23516 the output is 3. Input 714, 1.

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
    
    printf("output: %d", ((int)(num_old/pow(10, count-2)))%10);
}