// Exchange last two digit of a number without using modulo operator
#include<stdio.h>
int main(){
	int num, del, new_num, last, second_last;
	printf("Enter the number: ");
	scanf("%d",&num);
    last = num - ((num/10)*10);
    second_last = (num - ((num/100)*100))/10;
    new_num = ((((num/100)*10) + last)*10) + second_last;
	printf("Number after exchanging last two digit: %d", new_num);
}
