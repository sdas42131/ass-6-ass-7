// 12.	Write program, which prints the smallest and second smallest factors. If number is 24 then outputs are 2 and 3. If number is 65 then outputs are 5 and 13.

#include<stdio.h>
int main(){
    int num, count = 0;
    printf("Enter the num: ");
    scanf("%d", &num);

    for(int i = 2; i <= num; i++){
        if (num%i == 0){
            count++;
            printf("%d ", i);
            if(count == 2)
                break;
        }
    }
}