// 12.	Write program, which will print those numbers whose last digit is multiple of 3. e.g. 0, 3, 6, 9, 10, 13, 16, 19, 20, 23, ….. 

#include<stdio.h>
int main(){
    int n = 1;
    while (n > 0){
        if ((n%10)%3 == 0)
            printf("%d ", n);
        n++;
    }
}