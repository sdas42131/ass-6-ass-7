#include<stdio.h>

int inc(int num){
    int new_num;
	new_num = (num/100)*100 + ((num%100)/10) + (num%10)*10 ;
	return new_num;
}

int main(){
	printf("%d", inc(21715));
	
}