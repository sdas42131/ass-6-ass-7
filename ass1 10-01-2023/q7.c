// print the sum of last two digit
#include<stdio.h>
int main(){
	int num, sum;
	printf("Enter the number: ");
	scanf("%d",&num);
	sum = num%10 + ((num%100)/10);
	printf("Sum of last two digit: %d", sum);
}