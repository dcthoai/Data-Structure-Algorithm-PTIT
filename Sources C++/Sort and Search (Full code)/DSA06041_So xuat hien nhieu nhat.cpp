#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main(){
	faster();
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int x;
		map<int, int> mp;
		for(int i=0; i<n; ++i){
			cin>>x;
			mp[x]++;
		}
		int max_count = 0, ans;
		for(auto i : mp){
			if(i.second > max_count){
				max_count = i.second;
				ans = i.first;
			}
		}
		if(max_count > n/2)
			cout<<ans<<endl;
		else
			cout<<"NO"<<endl;
	}	
	
	return 0;
}


