// 7.	Write program, which outputs all factors and its count. When number is 24 (1,2) (2,3) (3,4) (4,6) (5,8) (6,12) (7,24) will be printed.

#include<stdio.h>
int main(){
    int num, count = 0;
    printf("Enter the num: ");
    scanf("%d", &num);

    for(int i = 2; i <= num; i++){
        if (num%i == 0){
            count++;
            printf("(%d, %d) ", count, i);
        }
    }
}