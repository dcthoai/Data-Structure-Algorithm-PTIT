#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main(){
	faster();
	int t;
	cin>>t;
	while(t--){
		int n, m;
		cin>>n>>m;
		int a, b[100005] = {};
		set <int> total, s;
		for(int i=0; i<n; ++i){
			cin>>a;
			b[a]++;
			total.insert(a);
		}
		for(int i=0; i<m; ++i){
			cin>>a;
			if(b[a])
				s.insert(a);
			total.insert(a);
		}
		for(int i : total)
			cout<<i<<' ';
		cout<<endl;
		for(int i : s)
			cout<<i<<' ';
		cout<<endl;
	}	
	return 0;
}

