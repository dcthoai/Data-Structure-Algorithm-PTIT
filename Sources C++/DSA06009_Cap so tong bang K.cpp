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
		int a[n], cnt = 0;
		for(int &i : a)
			cin>>i;
		for(int i=0; i<n-1; ++i){
			for(int j=i+1; j<n; ++j)
				if(a[i] + a[j] == k)
					++cnt;
		}
		cout<<cnt<<endl;
	}	
	return 0;
}


