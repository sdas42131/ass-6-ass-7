// Write a program to delete the second last digit
#include<stdio.h>
int main(){
	int num, del, new_num;
	printf("Enter the number: ");
	scanf("%d",&num);
	new_num = (num/100)*10 + num%10;
	printf("Number after  deleting 2nd last digit: %d", new_num);
	
}