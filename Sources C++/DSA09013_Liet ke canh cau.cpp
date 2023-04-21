#include<bits/stdc++.h>
using namespace std;

int n, m, visited[1005];
vector<int> a[1005];
vector<pair<int, int>> dsCanh;

//duyet do thi khi bo canh noi dinh x va y
void dfs(int u, int x, int y){
	visited[u] = true;
	for(int v : a[u]){
		if((u==x && v==y) || (u==y && v==x))
			continue;
		if(visited[v] == false)
			dfs(v, x, y);
	}
}

//dem thanh phan lien thong khi bo canh noi dinh x va y
int demTPLT(int x, int y){			
	int tplt = 0;
	memset(visited, false, sizeof(visited));
	for(int j=1; j<=n; ++j){
		if(visited[j] == false){
			tplt++;
			dfs(j, x, y);
		}
	}
	return tplt;
}

void canhCau(){
	int ans = 0;
	int check = demTPLT(-1000, -1000); // dem so thanh phan lien thong ban dau cua do thi
	for(pair<int, int> i : dsCanh){
		int x = i.first, y = i.second;
		int count = demTPLT(x, y);
		if(count > check)
			cout<<x<<" "<<y<<" "; 
	}
	for(int i=0; i<=n; ++i) 
		a[i].clear();
	dsCanh.clear(); 
}

int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>m;
		int tmp1, tmp2;
		for(int i=1; i<=m; ++i){
			cin>>tmp1>>tmp2;
			a[tmp1].push_back(tmp2);
			a[tmp2].push_back(tmp1);
			dsCanh.push_back({tmp1, tmp2});
		}
		canhCau();
		cout<<endl; 
	}
	return 0; 
}

