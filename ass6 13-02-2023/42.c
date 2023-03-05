// 42.	Write a program, which reads a number and finds the location of first even digit. If the number is 18263 then the output is 2 since the first even digit occurs at 2nd place.

#include<stdio.h>
#include<math.h>
int main(){
    int num, count = 0, location = 0;
    printf("Enter number: ");
    scanf("%d", &num);

    while (num > 0){
        if ((num%10)%2 == 0)
            location = count;
        
        num = num/10;
        count++;
    }
    
    printf("%d", count - location);
}