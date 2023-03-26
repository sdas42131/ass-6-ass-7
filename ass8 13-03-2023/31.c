#include<stdio.h>
int main(){
    int count = 1, k =65;
    for (int i = 65; i <= 78; i+=3){
        int k = i;
        for (int j = 1; j <= count; j++){
            printf("%c", k);
            k+=2;
        }
        printf("\n");
        count++;
    }
}