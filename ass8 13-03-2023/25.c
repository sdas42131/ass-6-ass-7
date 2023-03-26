#include<stdio.h>
int main(){
    int count = 1;
    for (int i = 69; i >= 65; i--){
        int k = i;
        for (int j = 1; j <= count; j++){
            printf("%c", k);
            k++;
        }
        printf("\n");
        count++;
    }
}