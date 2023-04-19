#include<stdio.h>
#include<math.h>
int isr(int num){
    return (int)pow(num, 0.5);
}

int main(){
	printf("%d", isr(16));
}