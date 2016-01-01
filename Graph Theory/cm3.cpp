#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int dfs(vector <int>graph[],int i,int n,bool visited[]){
    int so=0;
    stack <int>s;
    s.push(i);
    visited[i]=1;
    so++;
    while(!s.empty()){
        int vertex=s.top();
        s.pop();
        for(int i=0;i<graph[vertex].size();i++){
            if(!visited[graph[vertex][i]]){
                so++;
                s.push(graph[vertex][i]);
                visited[graph[vertex][i]]=1;
            }
        }
    }
    return so;
}
int main(int argc, char const *argv[])
{

    int n,m,x,y;
    cin>>n>>m;
    vector <int>graph[1001];
    for(int i=0;i<m;i++){
        cin>>x>>y;
        graph[x].push_back(y);
    }
    bool visited[n+1];
    int min=n,top;
    for(int i=1;i<=n;i++){
        if(!visited[i]){
            top=dfs(graph,i,n,visited);
            if(min>top) min=top;
            }
        }
        cout<<min<<endl;    
    }