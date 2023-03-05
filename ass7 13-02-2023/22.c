// 22.	Modify above to output (2,3)(3,4)(4,6)(6,12) and (5,7)(7,11)(11,35)(35,55)(55,77) (77,385).

#include<stdio.h>
int main(){
    int num, count = 0, m = 1;
    printf("Enter the num1: ");
    scanf("%d", &num);

    for(int i = 2; i <= num; i++){
        if (num % i == 0){
            count++;
            if (count > 1){
                printf("(%d, %d) ", m, i);
            }
            m = i;
        }
    }
}