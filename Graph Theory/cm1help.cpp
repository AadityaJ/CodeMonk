#include<bits/stdc++.h>
using namespace std;

#define lli long long

lli DFS(vector<lli> graph[],lli source,lli v,lli monkey[],lli visited[]);

int main()
{
    lli t;
    cin>>t;

    while(t--)
    {
        lli v,e;
        cin>>v>>e;
        vector<lli> graph[v+5];
        lli monkey[v+5];

        for(lli i=1;i<=e;i++)
        {
            lli x,y;
            cin>>x>>y;
            graph[x].push_back(y);
            graph[y].push_back(x);
        }
        for(lli i=1;i<=v;i++)
           cin>>monkey[i];

        lli banana=0,max=0;
        lli visited[v+5];
          for(lli i=0;i<v+5;i++) visited[i]=0;

        for(lli i=1;i<=v;i++)
        {
            if(!visited[i])

            {
                banana=DFS(graph,i,v,monkey,visited);
            if(banana>max)
                max=banana;
            }
        }
        cout<<max<<endl;
    }
return 0;
}


lli DFS(vector<lli> graph[],lli source,lli v,lli monkey[],lli visited[])
{
    lli bananas=0;
  stack<lli> Q;
  Q.push(source);
 visited[source]=1;

 bananas+=monkey[source];

  while(!Q.empty())
  {
      lli vertex=Q.top();

      Q.pop();
      for(lli i=0;i<graph[vertex].size();i++)
      {
          if(!visited[ graph[vertex][i] ])
          {
              bananas+=monkey[graph[vertex][i]];
              Q.push(graph[vertex][i]);
              visited[ graph[vertex][i] ]=1;
          }
      }
  }
  return bananas;
}

