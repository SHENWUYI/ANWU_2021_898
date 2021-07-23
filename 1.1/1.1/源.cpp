#include<stdio.h>
float fun(float x, int n);
int main(void)
{
	float x, y;
	int n;
	scanf_s("%d%f", &n, &x);
	y = fun(x, n);
	printf("y=%f", y);
	return 0;
}

float fun(float x, int n)
{
	float temp;
	if (n == 0)
		temp = 1;
	else if (n == 1)
		temp = x;
	else temp = (fun(x, n - 1) * x * (2 * n - 1) - (n - 1) * fun(x, n - 1)) / n;
	return temp;
}
