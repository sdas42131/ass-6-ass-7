// 4.	Write program, to find the number of factors. Input 24 output 7. Input 35 output 3.

#include<stdio.h>
int main(){
    int num, count = 0;
    printf("Enter the num: ");
    scanf("%d", &num);

    for(int i = 2; i <= num; i++){
        if (num%i == 0){
            count++;
        }
    }

    printf("%d", count);
}