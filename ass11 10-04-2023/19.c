#include<stdio.h>
#include<math.h>
int smn(int num, int k){
    return ((num%(int)pow(10, k))/pow(10, k-1));
}

int main(){
	printf("%d", smn(2314978, 3));
}