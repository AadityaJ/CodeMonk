//https://www.hackerearth.com/code-monk-greedy-technique/algorithm/little-jhool-and-his-addiction-2-4/description/
#include <stdio.h>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	scanf("%d",&t);
	while(t--){
		int n,k;
		int v[1000001];
		scanf("%d",&n);
		scanf("%d",&k);
		for(int i=0;i<n;i++) scanf("%d",&v[i]);
		if(n==2){
			printf("0\n");
			if(!k)printf("Lucky chap!\n");
			else printf("Chick magnet Jhool!\n");
			continue;
		}
		sort(v,v+n);
		int sum[(n/2)];
		for(int i=0;i<(n/2);i++) sum[i]=v[i]+v[n-i-1];
		sort(sum,sum+(n/2));
		int ans=sum[(n/2)-1]-sum[0];
		printf("%d\n",ans);
		if(ans>k) printf("No more girlfriends!\n");
		else if (ans==k) printf("Lucky chap!\n");
		else printf("Chick magnet Jhool!\n");
	}
	return 0;
}