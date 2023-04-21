#include<bits/stdc++.h>
using namespace std;

int E, V, U, unused[1005];
vector<vector<int>> a(1005);
vector<pair<int, int>> res;

void DFS(int u){
    unused[u] = 0;
    for(int &v : a[u]){
        if(unused[v]){
            res.push_back({u, v});
            DFS(v);
    	}
    }
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int x, y;
	    cin>>V>>E>>U;
	    for(int i=1; i<=E; ++i){
	        cin >> x >> y;
	        a[x].push_back(y);
	        a[y].push_back(x);
	    }
	    memset(unused, 1, sizeof(unused));
	    DFS(U);
	    if(res.size() == V - 1){
	    	for(pair<int, int> &i : res)
	            cout<<i.first<<' '<<i.second<<endl;
		}else 
			cout <<-1<< endl;
		res.clear();
		for(int i=0; i<=V; ++i)
			a[i].clear();
	}
    return 0;
}

