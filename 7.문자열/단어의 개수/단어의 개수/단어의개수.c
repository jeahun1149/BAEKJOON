#include <stdio.h>
#include <string.h>

int main()
{
	char s[999999];
	int i, c=0;
	gets(s);
	for(i=1; i<strlen(s)-1; i++)
		if(s[i]==' ') c++;
	printf("%d", c+1);
}