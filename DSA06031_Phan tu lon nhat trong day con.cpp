#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main(){
	faster();
	int t;
	cin>>t;
	while(t--){
		int n, k;
		cin>>n>>k;
		int a[n];
		multiset<int> s;
		for(int i=0; i<k; ++i){
			cin>>a[i];
			s.insert(a[i]);
		}
		cout<<*s.rbegin()<<' ';
		for(int i=k; i<n; ++i){
			cin>>a[i];
			s.erase(s.find(a[i-k]));
			s.insert(a[i]);
			cout<<*s.rbegin()<<' ';
		}
		cout<<endl;
	}	
	return 0;
}

