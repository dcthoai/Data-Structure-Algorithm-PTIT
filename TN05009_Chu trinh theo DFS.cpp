#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> a(1005);
bitset<1005> bs;
int en, check, trace[1005];

void DFS(int u, int par){
    if(check)
        return;
    bs[u] = 1;
    for(int i : a[u]){
        if(!bs[i]){
            trace[i] = u;
            DFS(i, u);
        }else{
            if(i != trace[u] and i == 1){
                check = 1;
                en = u;
                return;
            }
        }
    }
}

int main(){
    int t, v, e, x, y;
    cin >> t;
    while(t--){
        memset(trace, 0, sizeof(trace));
        cin >> v >> e;
        while(e--){
            cin >> x >> y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        for(int i = 1; i <= v; ++i)
            sort(a[i].begin(), a[i].end());
        check = 0;
        DFS(1, 0);
        if(check){
            vector<int> v;
            cout << 1 << ' ';
            while(trace[en]){
                v.push_back(en);
                en = trace[en];
            }
            for(int j=v.size()-1; j>=0; --j)
                cout<<v[j]<<' ';
            cout<<1<<endl;
        }else
            cout<<"NO"<<endl;
        bs.reset();
        for(int i=1; i<=v; ++i)
			a[i].clear();
    }
    return 0;
}
