#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> a(1005);
vector<int> ans(1005);
queue<int> q;
int unused[1005];

void bfs(int s, int t){
    q.push(s);
    while(!q.empty()){
        int u = q.front();
        unused[u] = 0;
        q.pop();
        for(int v : a[u]){
            if(unused[v]){
                q.push(v);
                unused[v] = 0;
                ans[v] = u;
            }
        }
    }
}

void findPath(int s, int t){
    int i = t;
    vector<int> v;
    v.push_back(i);
    while(i>s){
        v.push_back(ans[i]);
        i = ans[i];
    }
    for( i = v.size()-1; i>=0; --i)
        cout<<v[i]<<' ';
    cout<<endl;
}

int main() {
    int t;
    cin>>t;
    while(t--) {
        int V, E, s, t, x, y;
        cin>>V>>E>>s>>t;
        for(int i=1; i<=E; ++i) {
            cin>>x>>y;
            a[x].push_back(y);
        }
        memset(unused, 1, sizeof(unused));
        bfs(s, t);
        if(unused[t])
            cout<<-1<<endl;
        else
            findPath(s, t);
        ans.clear();
        for(int i=0; i<=V; ++i)
            a[i].clear();
    }
    return 0;
}


