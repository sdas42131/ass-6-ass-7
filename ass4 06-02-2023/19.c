// 19.	Write program, which will print all even numbers between 10 and 29, 40 and 59, 70 and 89. 

#include<stdio.h>
int main(){
    for (int i = 10; i <= 89; i+=10)
    {
        int k = i;
        for (int j = k; j < k + 20; j++)
        {
            if(i%2 == 0)
                printf("%d ", i);
            i++;
        }
    }
    
}