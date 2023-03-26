// Exchange last and third last digit of a number without using modulo operator
#include<stdio.h>
int main(){
	int num, del, new_num, last, third_last, second_last;
	printf("Enter the number: ");
	scanf("%d",&num);
    last = num - ((num/10)*10);
    second_last = (num - ((num/100)*100))/10;
    third_last = (num - ((num/1000)*1000))/100;
    new_num = ((((num/1000)*10) + last)*100) + ((second_last*10)+third_last);
	printf("Number after exchanging last and third last digit: %d", new_num);
}
