#include<bits/stdc++.h>
using namespace std;

#define sz 200005
int mx=INT_MIN;
vector<vector<int>> graph(sz);
vector<bool> vis(sz,false);

void DFS(int s)
{
    mx=max(mx,s);
    vis[s]=true;
    
    for(int i=0;i<graph[s].size();i++)
    {
        int v=graph[s][i];
        if(!vis[v])
        {
            DFS(v);
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int n,m,u,v;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        cin>>u>>v;
        
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    int ans=0;
    
    for(int i=1;i<=n;i++)
    {
        if(!vis[i])
        {
            if(i<mx)
            {
                ans++;
            }
            DFS(i);
        }
    }
    

    
    cout<<ans;
    return 0;
    
}