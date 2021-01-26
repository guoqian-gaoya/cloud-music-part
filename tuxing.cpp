#include<Stdio.h> 
main(){
	int left = -1 ;
	int right = 0;
	int index = 0;
	int N = 6 ;
	int a[N][N];
	for(int i = 0 ; i < N ; i++){
		if(i % 3 == 0)
		for(int j = i ; j < N ; j++)
		a[++left][right] = ++index ;
		if(i%3 == 1)
		for(int j = i ; j < N ; j++)
		a[left][++right] = ++index ;
		if(i % 3 == 2)
		for(int j = i ; j < N ; j++)
		a[--left][--right] = ++index ;
	}
	for(int i = 0 ; i < N ; i++){
		for(int j = 0 ; j <= i ; j++)
		printf("%3d" , a[i][j]);
		printf("\n");
	}
}
