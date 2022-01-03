#include <stdio.h>

int main()
{
	int x, i, j, k, c=0;
	scanf("%d", &x);
	for(i=1; i<=x; i++)
	{
		if(i<100) c++;
		else
		{
			int t_i = i;
			int arr[10];
			for(j=0, k=0; t_i>0; j++, k++, t_i/=10)
				arr[j] = t_i%10;
			for(j=1;j<k;j++)
			{
				if(arr[j-1]-arr[j] != arr[j]-arr[j+1]) break;
				if(j==k-2){c++; break;}
			}
		}
	}
	printf("%d\n", c);
}