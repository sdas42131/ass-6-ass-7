// Print Kth last digit of a number without using modulo operator
#include<stdio.h>
#include<math.h>
int main(){
	int num, del, new_num, pos, exp, knum;
	printf("Enter the number: ");
	scanf("%d",&num);
    printf("Enter the position: ");
    scanf("%d", &pos);
    exp = pow(10, pos);
    knum = (num - ((num/exp)*exp))/pow(10, (pos - 1));
	printf("%dth last digit is: %d", pos, knum);
}
