#include<stdio.h>
int main(){
    int count = 1;
    for (int i = 65; i <= 69; i++){
        for (int j = 1; j <= 70-i; j++)
        {
            printf("%c", i);
        }
        count++;
    }
}