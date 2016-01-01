#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int dfs(vector <int>graph[],int i,int n,int sum[],bool visited[]){
    int so=0;
    stack <int>s;
    s.push(i);
    visited[i]=1;
    so+=sum[i];
    while(!s.empty()){
        int vertex=s.top();
        s.pop();
        for(int i=0;i<graph[vertex].size();i++){
            if(!visited[graph[vertex][i]]){
                so+=sum[graph[vertex][i]];
                s.push(graph[vertex][i]);
                visited[graph[vertex][i]]=1;
            }
        }
    }
    return so;
}
int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while(t--){
        int n,m,x,y;
        cin>>n>>m;
        vector <int>graph[10000];
        for(int i=0;i<m;i++){
            cin>>x>>y;
            graph[x].push_back(y);
            graph[y].push_back(x);
        }
        bool visited[n+1];
        int sum[n+1];
        for(int i=1;i<=n;i++){
            cin>>sum[i];
        }
        int max=0,top;
        for(int i=1;i<=n;i++){
            if(!visited[i]){
                top=dfs(graph,i,sum,visited);
                if(max<top) max=top;
                }
            }
        cout<<max<<endl;    
        }
    }