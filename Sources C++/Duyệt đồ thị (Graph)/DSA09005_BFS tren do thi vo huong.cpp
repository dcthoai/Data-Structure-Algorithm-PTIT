#include<bits/stdc++.h>
using namespace std;

vector<int> a[1005];
int n, canh, unused[1005];
queue<int> q;

void bfs(int u){
    unused[u] = 1;
    q.push(u);
    while(q.empty() == 0){
        int v = q.front();
        cout<<v<<' ';
        q.pop();
        for(int x : a[v]){
            if(unused[x] == 0){
                q.push(x);
                unused[x] = 1;
            }
        }
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int u;
        cin>>n>>canh>>u;
        memset(unused, 0, sizeof(unused));
        for(int i=1; i<=canh; ++i){
            int x, y;
            cin>>x>>y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        bfs(u);
        cout<<endl;
        for(int i=0; i<=n; ++i)
            a[i].clear();
    }
    return 0;
}
