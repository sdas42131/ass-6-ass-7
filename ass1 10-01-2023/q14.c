// Multiply exchanging the last digits of two numbers
#include<stdio.h>
int main(){
	int num1, num2, del, mul, new_num1, new_num2;
	printf("Enter the number 1: ");
	scanf("%d",&num1);
    printf("Enter the number 2: ");
	scanf("%d",&num2);

    new_num1 = ((num1/10)*10) + (num2%10);
    new_num2 = ((num2/10)*10) + (num1%10);
	printf("Multiply after  exchanging the last two digits: %d", (new_num1 * new_num2));
}