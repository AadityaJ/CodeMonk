#include <stdio.h>
#include <set>
using namespace std;
int main(int argc, char const *argv[])
{
	int t,n,m;
	long long int a[10001];
	long long int val;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		scanf("%d",&m);
		set<long long int> s;
		for(int i=0;i<n;i++){
			scanf("%lld",&val);
			s.insert(val);
		}
		for(int i=0;i<m;i++){
			scanf("%lld",&val);
			if(s.find(val)!=s.end()) printf("YES\n");
			else {printf("NO\n");s.insert(val);}
		}
	}
	return 0;
}