#include<stdio.h>
int fact(int num){
    int fac = 1;
    for(int i = num; i > 0; i--){
        fac = fac * i;
    }
    return fac;
}

int main(){
	printf("%d", fact(5));
}