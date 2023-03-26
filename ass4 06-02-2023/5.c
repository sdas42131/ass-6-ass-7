// 5.	Write program, which prints all numbers between 20 and 40, and all even numbers between 50 and 80.

#include<stdio.h>
int main(){
    int n = 20, i;
    printf("All num bw 20 and 40: \n");
    while (n >= 20 && n < 40)
    {
        printf("%d ", n);
        n++;
    }

    printf("\nAll even num bw 50 and 80: \n");
    for ( i = 50; i < 80; i++)
    {
        if(i%2 == 0)
            printf("%d ", i);
    }
    
}