// 21.	Write program, which will print those numbers between 10 and 99, which after exchange of digits become divisible by 7. e.g. 12, 19, 24, 36, 41, 48, 53, 65, 70, 77, 82, 89, 94.

#include<stdio.h>
int main(){
    for (int i = 10; i < 100; i++)
    {
        if(((i%10)*10 + i/10)%7 == 0)
            printf("%d ", i);
    }
    
}