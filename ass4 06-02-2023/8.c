// 8.Write program, which will print all numbers which are multiple of either 3 or 7.

#include<stdio.h>
int main(){
    int n = 20, i;
    printf("All multiples of either 3 or 7: \n");
    while (n >= 0)
    {
        if(n%3 == 0 || n%7 == 0)
            printf("%d ", n);
        n++;
    }
    
}