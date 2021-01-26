#include<stdio.h>
#include<time.h>
#include<stdlib.h>


int println(int a[10] , 10){
	for(int i = 0 ; i < 9 ; i++){
		x = a[i];
		int index = i;
		for(int j = i ; j < 10 ; j++)
		 if(x > a[i])
			index = i;
			
		if(index != i){
			int t = a[i];
			a[i] = a[index];
			a[index] = t;
		}
	}
	return a;
}

int main(){
	int x ;
	int a[10];
	srand((unsigned)time(NULL));
	for(i = 0 ; i < 10 ; i++){
		a[i] = srand()% 90 + 10;
	}
	println(a , 10);
	
	for(int i = 0 ; i < 10 ; i++)
		printf("%d\t", i);
	
}


