#include <stdio.h>
#define M 4
#define N 5

int fun(int a[M][N])
{
	int sum = 0;
	int i, j;
	
	for (i = 0; i < M; i++)
	{
		for (j = 0; j < N; j++){
			if (i == 0 || j == 0 || i == M - 1 || j == N - 1)
				sum += a[i][j];
		}
	}
	
	return sum;
}

main()
{
	int a[M][N] = 
	{
		{1, 3, 5, 7, 9},
		{2, 9, 9, 9, 4},
		{6, 9, 9, 9, 8},
		{1, 3, 5, 7, 0},
	};
	
	int i, j, y;
	printf("The original data is:\n");
	for (i = 0; i < M; i++)
	{
		for (j = 0; j < N; j++)
			printf("%6d", a[i][j]);
		printf("\n");
	}
	
	y = fun(a);
	printf("baThe sum:%d\n", y);
	printf("\n");
}
 
