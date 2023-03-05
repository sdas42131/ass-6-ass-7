// 32.	Write a program to print the digit immediately after the first even digit. In above case 3.

#include<stdio.h>
#include<math.h>
int main(){
    int num, dig, count = 1, location, old_num;
    printf("Enter number: ");
    scanf("%d", &num);
    old_num = num;

    while (num > 0){
        if ((num%10)%2 == 0){
            location = count;
        }
        num = num/10;
        count++;
    }

    printf("output: %d", (((int)(old_num/pow(10, location-2)))%10));
}