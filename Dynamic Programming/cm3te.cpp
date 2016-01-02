#include<stdio.h>
#include <iomanip>
#include <iostream>
#include <algorithm>
using namespace std;
int x,y,n,w;
double p1,p2;
int vis[1002][1002];
double dp[1002][1002];
int tc;
double f(int idx, int pts)
{	cout<<"  "<<idx<<"  "<<pts<<endl;
	if ( pts > w ) pts = w;
	if ( vis[idx][pts] == tc ) return dp[idx][pts];
	vis[idx][pts] = tc;
	if ( idx == n ) {
		if ( pts == w ) return 1.0;
		return 0.0;
	}
	double ans1 = p1*f(idx+1,pts+x) + (1.0-p1)*f(idx+1,pts);
	cout<<"ans1 :"<<ans1<<endl;
	double ans2 = p2*f(idx+1,pts+y) + (1.0-p2)*f(idx+1,pts);
	cout<<"ans2 :"<<ans2<<endl;
	dp[idx][pts] = max(ans1,ans2);
	return dp[idx][pts];
}
int main()
{
	int t,a,b;
	cin >> t;
	for ( tc = 1; tc <= t; tc++ ) {
		cin >> x >> y >> n >> w	>> a >> b;
		p1 = (double)a/(double)100.0;
		p2 = (double)b/(double)100.0;
		double ans=f(0,0);
		cout << setprecision(6) << fixed << ans << endl;
	}
	return 0;
}