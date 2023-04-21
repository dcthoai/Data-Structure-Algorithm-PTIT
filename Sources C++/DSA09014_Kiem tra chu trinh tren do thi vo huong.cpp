#include<bits/stdc++.h>
using namespace std;

int V, E, check, visited[1005];
vector<vector<int>> a(1005);

void dfs(int u, int parent){
	visited[u] = 0;
	if(check)
		return;
	for(int v : a[u]){
		if(visited[v])
			dfs(v, u);
		else{
			if(v != parent){
				check = 1;
				return;
			}
		}
	}
}

int checkPath(){
	for(int i=1; i<=V; ++i){
		memset(visited, 1, sizeof(visited));
		check = 0;
		dfs(i, 1);
		if(check)
			return 1;
	}
	return 0;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int x, y;
		cin>>V>>E;
		for(int i=1; i<=E; ++i){
			cin>>x>>y;
			a[x].push_back(y);
			a[y].push_back(x);
		}
		
		if(checkPath())
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
		
		for(int i=1; i<=V; ++i)
			a[i].clear();
	}
	return 0;
}

