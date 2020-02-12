#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#define N 10

double fun(double x[], double *y)
{
	int i, j;
	double av = 0.0;
	for (i = 0; i < N; i++)
	{
		av = av + x[i] / N;
	}
	for (i = j = 0; i < N; i++)
	{
		if (x[i]>av)
		{
			y[j++] = x[i];
		}
	}
	y[j] = -1;
	return av;
}
int main()
{
	int i;
	double x[N], y[N];
	for (i = 0; i < N; i++)
	{
		x[i] = rand() % 50;
		printf("%4.0f", x[i]);
	}
	printf("\n");
	printf("\n The avreage is: %f\n", fun(x, y));
	for (i = 0; y[i] >= 0; i++)
		printf("%5.1f", y[i]);
	printf("\n");
	return 0;
}

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define M 4
#define N 5

int fun(int a[M][N])
{
	int i, j, sum = 0;
	for (i = 0; i < M; i++)
	{
		for (j = 0; j < N; j++)
		{
			if (i == 0 || i == M - 1 || j == 0 || j == N - 1)
			{
				sum = sum + a[i][j];
			}
		}
	}
	return sum;
}
void main()
{
	FILE *wf;
	int aa[M][N] = { { 1, 3, 5, 7, 9 }, { 2, 9, 9, 9, 4 }, { 6, 9, 9, 9, 8 }, { 1, 3, 5, 7, 0 } };
	int i, j, y;
	system("CLS");
	printf("The original data is :\n");
	for (i = 0; i < M; i++)
	{
		for (j = 0; j < N; j++)
		{
			printf("%6d", aa[i][j]);
		}
		printf("\n");
	}
	y = fun(aa);
	printf("\nThe sun: %d\n", y);
	printf("\n");
	/***************************/
		wf = fopen("out.dat", "w");
	fprintf(wf, "%d", y);
	fclose(wf);
	/***************************/
		return 0;
}