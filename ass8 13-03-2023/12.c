#include<stdio.h>
int main(){
    int count = 0;
    for (int i = 65; i <= 73; i+=2){
        for (int j = i; j <= 69+count; j++){
            printf("%c", j);
        }
        printf("\n");
        count++;
    }
}