// 29.	Write a program to prints the biggest digit and its location (from beginning). e.g. in 7396348 biggest digit is 9 and its location is 3rd  from beginning.

#include<stdio.h>
#include<math.h>
int main(){
    int num, large = 0, location, count = 1;
    printf("Enter number: ");
    scanf("%d", &num);

    while (num > 0){
        if (num%10 > large){
            large = num%10;
            location = count;
        }
        count++;
        num = num/10;
    }

    printf("output: %d, %d", large, count-location);
}