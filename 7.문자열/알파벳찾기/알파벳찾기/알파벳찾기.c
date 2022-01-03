#include <stdio.h>
#include <string.h>

int main()
{
	char S[100];
	int a[26], i, j;
	for(i=0; i<26; i++)
		a[i]=i+97;

	scanf("%s", &S);
	for(i=0;i<26; i++)
	{
		for(j=0; j<(int)strlen(S); j++)
		{
			if(a[i]==S[j])
			{
				printf("%d ", j);
				break;
			}
			else if(j==(int)strlen(S)-1)
				printf("-1 ");
		}
	}
}