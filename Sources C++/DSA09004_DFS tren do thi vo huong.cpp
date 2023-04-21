#include<bits/stdc++.h>
using namespace std;
int n,m;
vector<int>adj[1001];
bool visited[1001];

void dfs(int u) {
    cout<<u<<" ";
    visited[u]=true;
    for(int v:adj[u]) {
        if(!visited[v]) {
            dfs(v);
        }
    }
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int u;
        cin>>n>>m>>u;
        for(int i=0; i<m; i++) {
            int x,y;
            cin>>x>>y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        memset(visited, false, sizeof(visited));
        dfs(u);
        for(int i=0; i<=n+1; ++i)
            adj[i].clear();
        cout<<endl;
    }
}
