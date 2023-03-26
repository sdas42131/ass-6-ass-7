// Exchange the last and third last digit
#include<stdio.h>
int main(){
	int num, del, new_num;
	printf("Enter the number: ");
	scanf("%d",&num);
	new_num = (num/1000)*1000 + ((num%100)/10)*10 + (num%1000)/100 + (num%10)*100;
	printf("Number after  xchanging 3rd and last digit: %d", new_num);
	
}