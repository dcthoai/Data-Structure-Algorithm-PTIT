#include<bits/stdc++.h>
using namespace std;

vector<int> a[1005];
vector<int> ans;
int unused[1005], check;
queue<int> q;

void bfs(int u, int t){
	ans.push_back(u);
//	if(!check)
//		return;
//	if(u==t){
//		for(int i : ans)
//			cout<<i<<' ';
//		cout<<endl;
//		check = 0;
//		return;
//	}
	cout<<u<<' ';
	if(u==t)
		return;
	q.pop();
	for(int v : a[u])
		if(unused[v]){
			q.push(v);
			unused[v] = 0;
		}
	bfs(q.front(), t);
	ans.pop_back();
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int V, E, s, t, x, y;
		cin>>V>>E>>s>>t;
		for(int i=1; i<=E; ++i){
			cin>>x>>y;
			a[x].push_back(y);
		}
		memset(unused, 1, sizeof(unused));
		check = 1;
		bfs(s, t);
		
		if(check)
			cout<<-1<<endl;
		
		ans.clear();
		for(int i=0; i<=V; ++i)
			a[i].clear();
		
	}
	return 0;
}

