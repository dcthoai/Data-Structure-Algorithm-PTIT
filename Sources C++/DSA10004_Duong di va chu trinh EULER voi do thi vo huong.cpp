#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> a(1005);

int main(){
	int t;
	cin>>t;
	while(t--){
		int V, E, x, y, cnt = 0;
		cin>>V>>E;
		for(int i=1; i<=E; ++i){
			cin>>x>>y;
			a[x].push_back(y);
			a[y].push_back(x);
		}
		for(int i=1; i<=V; ++i){
			if(a[i].size() & 1)
				++cnt;
		}
		if(cnt){
			if(cnt == 2)
				cout<<1<<endl;
			else
				cout<<0<<endl;
		}else
			cout<<2<<endl;
		for(int i=1; i<=V; ++i)
			a[i].clear();
	}
	return 0;
}
