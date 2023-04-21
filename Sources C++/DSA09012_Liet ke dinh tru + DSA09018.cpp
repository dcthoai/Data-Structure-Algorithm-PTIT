#include<bits/stdc++.h>
using namespace std;

int V, E, visited[1005];
vector<vector<int>> a(1005);

//duyet do thi khi bo dinh x
void dfs(int u, int x){
	visited[u] = 0;
	for(int v : a[u]){
		if(v==x)
			continue;
		if(visited[v])
			dfs(v, x);
	}
}

//dem thanh phan lien thong khi bo dinh x
int demTPLT(int x){			
	int tplt = 0;
	memset(visited, 1, sizeof(visited));
	visited[x] = 0;
	for(int i=1; i<=V; ++i){
		if(visited[i]){
			tplt++;
			dfs(i, x);
		}
	}
	return tplt;
}

void dinhTru(){
	for(int i=1; i<=V; ++i)
		if(demTPLT(i) > 1)
		 	cout<<i<<' ';
	cout<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>V>>E;
		int x, y;
		for(int i=1; i<=E; ++i){
			cin>>x>>y;
			a[x].push_back(y);
			a[y].push_back(x);
		}
		dinhTru();
		for(int i=0; i<=V; ++i) 
			a[i].clear();
	}
	return 0; 
}

