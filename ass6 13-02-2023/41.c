// 41.	Write a program, which reads a number and finds the location of last even digit. If the number is 18263 then the output is 4 since the last even digit 6 occurs at 4th place.

#include<stdio.h>
#include<math.h>
int main(){
    int num, count = 1, location = 0, num2, count2 = 1;
    printf("Enter number: ");
    scanf("%d", &num);
    num2 = num;

    while (num > 0){
        if ((num%10)%2 == 0){
            location = count;
            break;
        }
        num = num/10;
        count++;
    }
    
    
    while (num2 > 0){
        num2 = num2/10;
        count2++;
    }

    printf("%d", count2 - location);
}