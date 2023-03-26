// 7.	Write program, which prints all even numbers between 20 and 40, and all odd numbers between 50 and 80.

#include<stdio.h>
int main(){
    int n = 20, i;
    printf("All even num bw 20 and 40: \n");
    while (n >= 20 && n < 40)
    {
        printf("%d ", n);
        n+=2;
    }

    printf("\nAll odd num bw 50 and 80: \n");
    for ( i = 51; i < 80; i+=2){
        printf("%d ", i);
    }
    
}