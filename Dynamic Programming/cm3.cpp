//https://www.hackerearth.com/code-monk-dynamic-programming/algorithm/samu-and-shooting-game/
#include <stdio.h>
double dp[1001][1001];
int w,n;
int x,y,p1,p2;
void init(){
	for(int i=0;i<1001;i++){
		for(int j=0;j<1001;j++)
			dp[i][j]=-1.00;
	}
}
int max(int a,int b){
	return (a>b)?a:b;
}
int cost(int i,int pts){
	if(pts>w) pts=w;
	if(i==n) {
		if(pts==w) return 1.0;
		else return 0.0;
	}
	if(dp[i][pts]!=-1.00) return dp[i][pts];
	double ans1=cost(i+1,pts+x)*p1+(1.0-p1)*(cost(i+1,pts));
	double ans2=cost(i+1,pts+y)*p2+(1.0-p2)*(cost(i+1,pts));
	return dp[i][pts]=max(ans1,ans2);
}
int main(int argc, char const *argv[])
{
	int t;
	scanf("%d",&t);
	while(t--){
		//ma=1000;
		init();
		scanf("%d",&x);
		scanf("%d",&y);
		scanf("%d",&n);
		scanf("%d",&w);
		scanf("%d",&p1);
		scanf("%d",&p2);
		double co;
		co=(cost(0,0));
		printf("%0.6f\n",(co/100.00));
		//printf("%d\n",ma);
	}
	return 0;
}