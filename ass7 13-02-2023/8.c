// 8.	Write program, which reads another integer k and prints the kth factor. If given number is 24 and k is 5 then output is 8.

#include<stdio.h>
int main(){
    int num, count = 0, k;
    printf("Enter the num: ");
    scanf("%d", &num);
    printf("Enter k: ");
    scanf("%d", &k);

    for(int i = 2; i <= num; i++){
        if (num%i == 0){
            count++;
            if (count == k)
                printf("%d", i);
        }
    }
}