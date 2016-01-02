//https://www.hackerearth.com/code-monk-dynamic-programming/algorithm/samu-and-shopping/
#include <stdio.h>
int minima(int a,int b){
	return (a>b)?b:a;
}
int minthree(int a,int b,int c){
	return (a<b)?((a<c)?a:c):((b<c)?b:c);
}
int p[100001][3],n;
int cache[100001][3];
void init(){
	for(int i=0;i<100000;i++) 
		for(int j=0;j<3;j++)
			cache[i][j]=-1;
}
//int iter; 
int cost(int i,int a){
	iter++;
	if(i==0) return p[0][a];
	if(cache[i][a]!=-1) return cache[i][a];
	int b,c;
	b=(a+1)%3;
	c=(a+2)%3;
	return cache[i][a]=(p[i][a]+minima(cost(i-1,b),cost(i-1,c)));
}
int main(int argc, char const *argv[])
{
	int t;
	scanf("%d",&t);
	while(t--){
		//iter=0;
		init();
		scanf("%d",&n);
		for(int i=0;i<n;i++)
			for(int j=0;j<3;j++)
				scanf("%d",&p[i][j]);
		int re=minthree(cost(n-1,0),cost(n-1,1),cost(n-1,2));
		printf("%d\n",re);
		//printf("%d\n",iter);
	}
	return 0;
}