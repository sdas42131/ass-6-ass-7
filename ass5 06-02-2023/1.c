// 1.Write program, which reads 2 numbers and prints both of them. The bigger number is printed first.

#include<stdio.h>
int main(){
    int a, b;
    printf("Enter number 1: ");scanf("%d", &a);
    printf("Enter number 2: ");scanf("%d", &b);

    if (a > b)
    {
        printf("%d, %d", a, b);
    }
    else{
        printf("%d, %d", b, a);
    }
    
}