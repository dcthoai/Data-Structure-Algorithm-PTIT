#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main(){
	faster();
	int t;
	cin>>t;
	while(t--){
		int n, test = 1;
		cin>>n;
		int a[n];
		map<int, int> mp;
		for(int i=0; i<n; ++i){
			cin>>a[i];
			mp[a[i]]++;
		}
		for(int i=0; i<n; ++i){
			if(mp[a[i]] > 1){
				cout<<a[i]<<endl;
				test = 0;
				break;
			}
		}
		if(test)
			cout<<"NO"<<endl;
	}	
	return 0;
}


