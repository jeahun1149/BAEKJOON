#include <stdio.h>

int main(){
	int A[10], i, j, c=0;
	for(i=0; i<10; i++)
	{
		scanf("%d", &A[i]);
		A[i] = A[i]%42;
	}
	for(i=0; i<10; i++)
	{
		for(j=i+1; j<10; j++)
		{
			if(A[i]==A[j]){
				c++;
				break;
			}
		}
	}
	printf("%d", 10-c);
}