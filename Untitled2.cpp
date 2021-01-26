#include<stdio.h>

int main(){
	int b = 2;
	printf("%d\n",(b << 2) / (3 || b));
	return 0;
} 
