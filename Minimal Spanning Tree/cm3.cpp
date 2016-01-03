#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
const long long int num=1000000007;
int arr[1501], nodes, edges;
pair <long long, pair<int, int> > p[1501];
void initialize(int n){
	for(int i=1;i<=1501;i++) arr[i]=i;
}
int root(int n){
	if(n!=arr[n]){
		arr[n]=arr[arr[n]];
		n=arr[n];
	}
	return n;
}
void un(int a,int b){
	int root_a=root(a);
	int root_b=root(b);
	arr[root_a]=arr[root_b];
}
long long kruskal(pair<long long, pair<int, int> > p[])
{
    int x, y;
    long long cost, minimumCost = 1;
    for(int i = 0;i < edges;++i)
    {
        // Selecting edges one by one in increasing order from the beginning
        x = p[i].second.first;
        y = p[i].second.second;
        cost = p[i].first%num;
        // Check if the selected edge is creating a cycle or not
        if(root(x) != root(y))
        {
            minimumCost = (minimumCost*cost)%num;
            un(x, y);
        }    
    }
    return minimumCost%num;
}

int main(int argc, char const *argv[])
{
	int t;
	scanf("%d",&t);
	while(t--){
		int x,y;
		long long int weight,cost;
		long long minimumCost;
		scanf("%d",&nodes);
		scanf("%d",&edges);
		initialize(nodes);
		for(int i=0;i<edges;i++){
			scanf("%d",&x);
			scanf("%d",&y);
			scanf("%lld",&weight);
			p[i]=make_pair(weight, make_pair(x, y));
			}
		sort(p, p + edges);
    	minimumCost = kruskal(p);
    	printf("%lld\n",minimumCost);
	}
	return 0;
}

