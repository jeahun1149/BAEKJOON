#include <stdio.h>

int main()
{
	int a, s=0, i;
	char b[100];
	scanf("%d %s", &a, &b);
	for(i=0; i<a; i++)
		s+=b[i]-48;
	printf("%d", s);
}