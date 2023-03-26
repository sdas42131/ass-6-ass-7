// Find last digit of a number without using modulo operator
#include<stdio.h>
int main(){
	int num, del, last;
	printf("Enter the number: ");
	scanf("%d",&num);
	last = num - ((num/10)*10);
	printf("The last digit is: %d", last);
	
}