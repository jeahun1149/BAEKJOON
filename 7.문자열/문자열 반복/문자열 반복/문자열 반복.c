#include <stdio.h>
#include <string.h>

int main()
{
	char S[20];
	int T,R,i,j,l;
	scanf("%d",&T);
	for(i=0;i<T;i++)
	{
		scanf("%d %s",&R,&S);
		l=R*strlen(S);
		for(j=0;j<l;j++) putchar(S[(j%l)/R]);
		putchar('\n');
	}
}