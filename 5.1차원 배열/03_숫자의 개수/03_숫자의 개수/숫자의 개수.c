#include <stdio.h>
int main(){
	int a,b,c,r,i,t=0,d[10]={0,};
	scanf("%d %d %d",&a,&b,&c);
	r=a*b*c;
	while(r>0){
		d[r%10]+=1;
		r/=10;t++;
	}
	for(i=0;i<10;i++) printf("%d\n",d[i]);
}