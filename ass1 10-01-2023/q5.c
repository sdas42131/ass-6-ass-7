// Write a program to delete last two digits of a number
#include<stdio.h>
int main(){
	int num, del;
	printf("Enter the number: ");
	scanf("%d",&num);
	del = num/100;
	printf("After deletion of last two digits: %d", del);
	
}