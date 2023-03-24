#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main(){
	faster();
	int t, n;
	cin>>t;
	while(t--){
		cin>>n;
		long long a[n], b[n-1];
		for(long long &i : a)
			cin>>i;
		for(long long &i : b)
			cin>>i;
		for(int i=0; i<n; ++i){
			if(a[i] != b[i]){
				cout<<i+1<<endl;
				break;
			}
		}
	}
	return 0;
}

