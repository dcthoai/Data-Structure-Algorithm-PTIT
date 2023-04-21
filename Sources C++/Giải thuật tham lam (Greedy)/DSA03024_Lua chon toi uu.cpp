#include<bits/stdc++.h>
using namespace std;

int main(){
	int t, n;
	cin>>t;
	while(t--){
		cin>>n;
		multimap<int, int> mp;
		int x, y, time = 0, cnt = 0;
		for(int i=0; i<n; ++i){
			cin>>x>>y;
			mp.insert({y, x});
		}
		for(auto i : mp){
			if(i.second >= time){
				++cnt;
				time = i.first;
			}
		}
		cout<<cnt<<endl;
	}
	return 0;
}


