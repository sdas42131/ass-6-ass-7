// 6.	Write program, which reads a number and prints “yes” if the given number is prime. If the given number is not a prime then “no” is printed. (Hint: Use above program. A prime number has only one factor). Input 24 output “no”. Input 13 output “yes”.

#include<stdio.h>
int main(){
    int num, isPrime = 1;
    printf("Enter the num: ");
    scanf("%d", &num);

    for(int i = 2; i < num; i++){
        if (num%i == 0){
            isPrime = 0;
            break;
        }
    }

    if (isPrime == 0)
        printf("no");
    else
        printf("yes");
}