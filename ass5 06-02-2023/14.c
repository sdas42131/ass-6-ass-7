// 14.	Write a program, which reads a number X and prints a number Y. Y=X+10 if X is 6. Y is X*X if X is 7. Y is 2*X+4 if X is 12. Otherwise Y is X*6-1. (use switch)

#include<stdio.h>
int main(){
    int x;
    printf("Enter x: ");
    scanf("%d", &x);

    switch (x)
    {
    case 6:
        printf("y = %d", x + 10);
        break;
    case 7:
        printf("y = %d", x * x);
        break;
    case 12:
        printf("y = %d", 2*x + 4);
        break;
    default:
        printf("y = %d", 6*x - 1);
    }
}