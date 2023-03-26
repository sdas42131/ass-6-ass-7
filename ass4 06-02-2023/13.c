// 13.	Write program, which will print those numbers whose last digit is between 5 and 8. e.g. 5, 6, 7, 8, 15, 16, 17, 18, 25, 26, ….

#include<stdio.h>
int main(){
    int n = 1;
    while (n > 0){
        if ((n%10) >= 5 && (n%10) <= 8)
            printf("%d ", n);
        n++;
    }
}