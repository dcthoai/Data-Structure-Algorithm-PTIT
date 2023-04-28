#include<bits/stdc++.h>
using namespace std;

int V, E, visited[1005];
vector<vector<int>> a(1005);

void dfs(int u) {
    visited[u] = true;
    for(int v : a[u]) {
        if(visited[v] == false)
            dfs(v);
    }
}

int demTPLT() {
    int tplt = 0;
    memset(visited, false, sizeof(visited));
    for(int j=1; j<=V; ++j) {
        if(visited[j] == false) {
            tplt++;
            dfs(j);
        }
    }
    return tplt;
}

int main() {
    int t;
    cin>>t;
    while(t--) {
        cin>>V>>E;
        int x, y;
        for(int i=1; i<=E; ++i) {
            cin>>x>>y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        cout<<demTPLT()<<endl;
        for(int i=0; i<=V; ++i)
            a[i].clear();
    }
    return 0;
}
