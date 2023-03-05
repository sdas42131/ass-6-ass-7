// 33.	Write a program to print the kth even digit from last. e.g. input 23687 and k=2 output 6.

#include<stdio.h>
int main(){
    int num, k, count = 0;
    printf("Enter number: ");
    scanf("%d", &num);
    printf("Enter k: ");
    scanf("%d", &k);

    while (num > 0){
        if ((num%10)%2 == 0){
            count++;
            if(count == k)
                printf("%d", num%10);
        }
        num = num/10;
    }
}