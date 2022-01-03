#include <stdio.h>

int main()
{
	int c, n, i, j;
	scanf("%d", &c);
	for(i=0; i<c; i++)
	{
		int s[1000], sum=0, n2=0;
		scanf("%d", &n);
		for(j=0; j<n; j++)
		{
			scanf("%d", &s[j]);
			sum+=s[j];
		}
		for(j=0; j<n; j++)
			if((double)s[j]>(double)sum/n) n2++;
		printf("%.3lf%%\n", (double)n2/n*100);
	}
}