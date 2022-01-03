#include <stdio.h>

int main()
{
	char S[999999];
	char C;
	int a[26] = {0,}, i=0, r=0;
	gets(S);
	while(S[i]>64)
	{
		if(S[i]<91)	S[i]+=32;
		a[S[i]-97]+=1;
		if(a[S[i]-97]>=r)
		{
			if(a[S[i]-97]>r){r=a[S[i]-97]; C=S[i]-32;}
			else C='?';
		}
		i++;
	}
	printf("%c", C);
}