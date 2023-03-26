// Print number after doubling last digit
#include<stdio.h>
int main(){
	int num, del, new_num;
	printf("Enter the number: ");
	scanf("%d",&num);
	new_num = num - num%10 + (num%10)*2;
	printf("Number after  doubling last digit: %d", new_num);
	
}