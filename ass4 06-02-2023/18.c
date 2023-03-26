// 18.	Write program, which will print all odd numbers between 0 and 9, 20 and 29, 40 and 49, … , 80 and 89 and all even numbers between 10 and 19, 30 and 39, … , 90 and 99. [Hint: check condition ((x/10)%2) != (x%2)].

#include<stdio.h>
int main(){
    int n = 1;
    while (n < 100){
        if (((n/10)%2) == 1 && n%2 == 0)
            printf("%d ", n);
        else if (((n/10)%2) != (n%2) && n%2 != 0)
            printf("%d ", n);
            
        n++;
    }
}