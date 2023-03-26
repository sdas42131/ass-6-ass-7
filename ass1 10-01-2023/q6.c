// Write a program to print 2nd last digit
#include<stdio.h>
int main(){
	int num, del;
	printf("Enter the number: ");
	scanf("%d",&num);
	del = (num%100)/10;
	printf("2nd last digit: %d", del);
	
}