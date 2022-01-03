#include <stdio.h>
int d(int n);

int main()
{
	int n, arr[10000], i;
	for (n = 1; n < 10001; n++)
	{
		arr[n - 1] = d(n);
	}

	for (n = 1; n < 10001; n++)
	{
		int a = 0;
		for (i = 0; i < 10000; i++)
		{
			if (n == arr[i])
			{
				a++;
				break;
			}
		}
		if(a==0) printf("%d\n", n);
	}

}

int d(int n)
{

	int a, sum;
	a = sum = n;
	do
	{
		sum += (a % 10);
		a /= 10;
	} while (a > 0);
	return sum;
}
