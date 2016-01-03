//https://www.hackerearth.com/code-monk-minimum-spanning-tree/algorithm/check-it/description/
#include <stdio.h>
#include <set>
#include <vector>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	scanf("%d",&t);
	while(t--){
		std::vector<pair<int, int> > v;
		set <int> s;
		int n,m;
		scanf("%d",&n);
		scanf("%d",&m);
		for(int i=0;i<m;i++){
			int x,y;
			scanf("%d",&x);
			scanf("%d",&y);
			v.push_back(make_pair(x,y));
		}
		for(int i=0;i<n-1;i++){
			int d;
			scanf("%d",&d);
			int x,y;
			x=v[d-1].first;
			y=v[d-1].second;
			s.insert(x);
			s.insert(y);
		}
		if(s.size()==n) printf("YES\n");
		else printf("NO\n");
		v.clear();
	}
	return 0;
}

