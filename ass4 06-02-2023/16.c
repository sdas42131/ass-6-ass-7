// 16.	Write program, which will print those numbers whose first digit leaves remainder 1 when divided by 3. e.g.  10, 11, ..., 19,40, 41, …, 49, 70, 71, ..., 79.

#include<stdio.h>
int main(){
    int n = 1;
    while (n > 0){
        if (((n/10)%3) == 1)
            printf("%d ", n);
        n++;
    }
}