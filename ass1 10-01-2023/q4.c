// Write a program to delete last digit
#include<stdio.h>
int main(){
	int num, del;
	printf("Enter the number: ");
	scanf("%d",&num);
	del = num/10;
	printf("After deletion: %d", del);
}