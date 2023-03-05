// 2.	Write program, which will output all factors by exchanging last two digits. Input 385 output 50 70 11 53 55 77 358.

#include<stdio.h>
int main(){
    int num, fac;
    printf("Enter the num: ");
    scanf("%d", &num);

    for(int i = 2; i <= num; i++){
        if (num%i == 0){
            printf("%d ", ((int)i/100)*100 + (i%10)*10 + (int)((i%100)/10));
        }
    }
}