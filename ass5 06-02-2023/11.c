// 11.	Write program, which reads an integer X and prints an integer Y. Y is X+10 if X is between 10 and 30. Y is 3*X if X is between 50 and 70. Otherwise Y is X-2.

#include<stdio.h>
int main(){
    int x;
    printf("Enter x: ");
    scanf("%d", &x);

    if(x>10 && x<30)
        printf("Y is: %d", x+10);
    else if(x>50 && x<70)
        printf("Y is: %d", 3*x);
    else
        printf("Y is: %d", x-2);
}