#include<stdio.h>
int main(){
    int count = 1, num = 48;
    for (int i = 3; i >= 1; i--){
        int l = num;
        int caps = 65;
        
        printf("abcd");
        for (int k = 1; k <= 7 + count; k++){
            printf("%c", caps);
            caps++;
        }
        for (int k = 1; k <= 6 - count; k++){
            printf("%c", l);
            l++;
        }

        printf("\n");
        count++;
        num++;
    }
}