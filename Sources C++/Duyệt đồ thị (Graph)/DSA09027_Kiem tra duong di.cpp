#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> a(1005);
bool visited[1005], check;

void dfs(int u, int t){
	visited[u] = 0;
	if(check)
		return;
	if(u==t){
		check = 1;
		return;
	}
	for(int i : a[u])
		if(visited[i])
			dfs(i, t);
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int N, M, u, v;
		cin>>N>>M;
		for(int i=1; i<=M; ++i){
			cin>>u>>v;
			a[u].push_back(v);
			a[v].push_back(u);
		}
		int Q, x, y;;
		cin>>Q;
		while(Q--){
			cin>>x>>y;
			check = 0;
			memset(visited, 1, sizeof(visited));
			dfs(x, y);
			if(check)
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
		}
		for(int i=1; i<=N; ++i)
			a[i].clear();
	}
	return 0;
}

