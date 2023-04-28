#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n, m;
		cin>>n>>m;
		int a[n][m];
		for(int i=0; i<n; ++i){
			for(int j=0; j<m; ++j)
				cin>>a[i][j];
		}
		for(int i=1; i<m; ++i)
			a[0][i] += a[0][i-1];
		for(int i=1; i<n; ++i)
			a[i][0] += a[i-1][0];
			
		for(int i=1; i<n; ++i){
			for(int j=1; j<m; ++j){
				int temp = min(a[i-1][j], a[i][j-1]);
				a[i][j] += min(temp, a[i-1][j-1]);
			}
		}
		cout<<a[n-1][m-1]<<endl;
	}
	return 0;
}
