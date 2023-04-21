#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main(){
	faster();
	int t, n;
	cin>>t;
	while(t--){
		cin>>n;
		int a[n];
		for(int &i : a)
			cin>>i;
		long long ans = 0, sum = 0;
		for(int i=0; i<n; ++i){
			sum+=a[i];
			if(sum > ans)
				ans = sum;
			if(sum < 0)
				sum = 0;
		}
		cout<<ans<<endl;
	}
	return 0;
}

