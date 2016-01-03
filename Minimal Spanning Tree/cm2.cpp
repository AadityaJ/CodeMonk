#include <stdio.h>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;
const int MAX = 1e4 + 5;
int id[MAX], nodes, edges;
pair <long long, pair<int, int> > p[MAX];

void initialize()
{
    for(int i = 0;i < MAX;++i)
        id[i] = i;
}

int root(int x)
{
    while(id[x] != x)
    {
        id[x] = id[id[x]];
        x = id[x];
    }
    return x;
}

void union1(int x, int y)
{
    int p = root(x);
    int q = root(y);
    id[p] = id[q];
}

long long kruskal(pair<long long, pair<int, int> > p[])
{
    int x, y;
    long long cost, minimumCost = 0;
    for(int i = edges-1;i >=0;--i)
    {
        // Selecting edges one by one in increasing order from the beginning
        x = p[i].second.first;
        y = p[i].second.second;
        cost = p[i].first;
        // Check if the selected edge is creating a cycle or not
        if(root(x) != root(y))
        {
            minimumCost += cost;
            union1(x, y);
        }    
    }
    return minimumCost;
}

int main()
{   int t;
    scanf("%d",&t);
    while(t--){
        int x, y;
        long long weight, cost, minimumCost;
        initialize();
        scanf("%d",&nodes);
        scanf("%d",&edges);
        for(int i = 0;i < edges;++i)
        {
            scanf("%d",&x);
            scanf("%d",&y);
            scanf("%lld",&weight);
            p[i] = make_pair(weight, make_pair(x, y));
        }
        // Sort the edges in the ascending order
        sort(p, p + edges);
        minimumCost = kruskal(p);
        printf("%lld\n",minimumCost);
        return 0;
    }
}