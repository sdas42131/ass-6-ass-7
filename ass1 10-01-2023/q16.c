// Find second last digit of a number without using modulo operator
#include<stdio.h>
int main(){
	int num, del, second_last;
	printf("Enter the number: ");
	scanf("%d", &num);
	second_last = (num - ((num/100)*100))/10;
	printf("The second last digit is: %d", second_last);
}
