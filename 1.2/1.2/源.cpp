#include<stdio.h>
#define N 80

int fun(int a[], int n);

int main(void)
{
	int a[N] = { 1,1,1,2,2,2,3,3,3,3,4,4,5,6,9,6,6,7,8,10,9,10 },i,n=22;
	n = fun(a, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
	}
	return 0;
}

int fun(int a[], int n)
{
	int i, j = 1, k = a[0], m, flag = 0;
	for (i = 1; i < n; i++)
	{
		;
		for (m = 0; m < j; m++)
		{
			if (a[i] == a[m])
				flag = 1;
		}
		if (flag == 0)
		{
			___________;
			k = a[i];
		}
	}
	a[j] = 0;
	return j;
}
