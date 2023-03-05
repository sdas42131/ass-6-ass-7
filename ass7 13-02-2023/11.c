// 11.	Write program, which prints biggest factor other than itself. 

#include<stdio.h>
int main(){
    int num, count = 0, factor;
    printf("Enter the num: ");
    scanf("%d", &num);

    for(int i = 2; i < num; i++){
        if (num%i == 0){
            count++;
            factor = i;
        }
    }

    printf("%d", factor);
}