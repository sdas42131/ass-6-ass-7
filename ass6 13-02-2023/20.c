// 20.	Write a program to print the second last even digit. e.g. input 23863 output 8 (do not use ‘if’). Input 325145761 output 4. [Hint: use two loops]

#include<stdio.h>
#include<math.h>
int main(){
    int num, count = 0;
    printf("Enter num: ");
    scanf("%d", &num);
    while (num > 0){
        if ((num%10)%2 == 0){
            count++;
            if (count == 2){
                printf("%d", num%10);
                break;
            }
        }

        num = num/10;
    }
}