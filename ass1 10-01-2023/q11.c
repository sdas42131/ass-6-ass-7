// Exchange the last two digits
#include<stdio.h>
int main(){
	int num, del, new_num;
	printf("Enter the number: ");
	scanf("%d",&num);
	new_num = (num/100)*100 + ((num%100)/10) + (num%10)*10 ;
	printf("Number after  exchanging the last two digits: %d", new_num);
	
}