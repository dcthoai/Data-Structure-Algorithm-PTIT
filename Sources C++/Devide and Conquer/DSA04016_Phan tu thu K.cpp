#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main(){
	faster();
	int t;
	cin>>t;
	while(t--){
		long n, m, k;
		cin>>n>>m>>k;
		long long res[n+m];
		for(int i=0; i<n+m; ++i)
			cin>>res[i];
		sort(res, res+n+m);
		cout<<res[k-1]<<endl;
	}
	return 0;
}

