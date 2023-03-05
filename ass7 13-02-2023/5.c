// 5.	Write program to find average factor. I/p 24  o/p 8.429 (59/7)      I/p 25   o/p 15.67  (47/3) 

#include<stdio.h>
int main(){
    int num, count = 0, s = 0;
    printf("Enter the num: ");
    scanf("%d", &num);

    for(int i = 2; i <= num; i++){
        if (num%i == 0){
            s = s + i;
            count++;
        }
    }

    printf("%f", (float)s/(float)count);
}