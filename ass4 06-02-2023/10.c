// 10.	Write program, which will print all numbers, which are even but not a multiple of either 3 or 5. e.g. 2 4 8 14 16 22 …. 

#include<stdio.h>
int main(){
    int n = 1;
    while (n > 0){
        if(n%2 == 0 && n%3 != 0 && n%5 != 0)
            printf("%d ", n);

        n++;
    }
    
}