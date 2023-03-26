// Delete second last digit of a number without using modulo operator
#include<stdio.h>
int main(){
	int num, del, new_num;
	printf("Enter the number: ");
	scanf("%d",&num);
	new_num = ((num/100)*10) + num - ((num/10)*10);
	printf("New number after deleting second last digit: %d", new_num);
}
