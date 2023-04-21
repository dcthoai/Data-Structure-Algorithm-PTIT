#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> a(1005);
vector<int> ans;
int unused[1005], check = 1;

void dfs(int u, int t) {
    unused[u] = 0;
    ans.push_back(u);
    if(!check)
        return;
    if(u==t) {
        check = 0;
        for(int i : ans)
            cout<<i<<' ';
        cout<<endl;
        return;
    }
    for(auto v : a[u])
        if(unused[v])
            dfs(v, t);
    ans.pop_back();
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
            a[y].push_back(x);
        }
        memset(unused, 1, sizeof(unused));
        check = 1;
        dfs(s, t);
        if(check)
            cout<<-1<<endl;
        ans.clear();
        for(int i=0; i<=V; ++i)
            a[i].clear();
    }
    return 0;
}


