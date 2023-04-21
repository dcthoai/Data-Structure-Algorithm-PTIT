#include<bits/stdc++.h>
using namespace std;

int V, E, visited[1005];
vector<vector<int>> a(1005);

void bfs(int u){
    queue<int> q;
    visited[u] = 0;
    q.push(u);
    while(!q.empty()){
        int v = q.front();
        q.pop();
        for(int x : a[v]){
            if(visited[x]){
                q.push(x);
                visited[x] = 0;
            }
        }
    }
}

int demTPLT() {
    int tplt = 0;
    memset(visited, 1, sizeof(visited));
    for(int i=1; i<=V; ++i){
        if(visited[i]){
            tplt++;
            bfs(i);
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
        for(int i=1; i<=E; ++i){
            cin>>x>>y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        cout<<demTPLT()<<endl;
        for(int i=1; i<=V; ++i)
            a[i].clear();
    }
    return 0;
}
