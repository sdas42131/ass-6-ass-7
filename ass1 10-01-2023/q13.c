// Find product after deleting last and second last digits

#include<stdio.h>
#include<conio.h>
int main(){
    int num, del, mul;
    printf("Enter the number: ");
    scanf("%d", &num);
    mul = (num/10) * (((num/100)*10) + (num%10));
    printf("Multiplication deleting last and second last: %d", mul);
}