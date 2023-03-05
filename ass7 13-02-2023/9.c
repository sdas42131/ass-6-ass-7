// 9.	Write program, which reads a number and prints only those factors, which leave remainder 2 when divided by 5. e.g. if given number is 24 then its factors are 2, 3, 4, 6, 8, 12 and 24. However, only 2 and 12 will be printed.

#include<stdio.h>
int main(){
    int num, count = 0;
    printf("Enter the num: ");
    scanf("%d", &num);

    for(int i = 2; i <= num; i++){
        if (num%i == 0){
            if (i%5 == 2)
                printf("%d ", i);
        }
    }
}