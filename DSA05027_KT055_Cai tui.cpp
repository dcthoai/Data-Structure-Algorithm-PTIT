#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int n, maxW, val[1005], w[1005], dp[1005][1005];

void Check(){
	memset(dp, 0, sizeof(dp));
	for(int i=1; i<=n; ++i){
		for(int j=1; j<=maxW; ++j){
			dp[i][j] = dp[i-1][j];
			if(j >= w[i]){
				int tmp = dp[i-1][j-w[i]] + val[i];
				dp[i][j] = (dp[i-1][j] > tmp) ? dp[i-1][j] : tmp;
			}
		}
	}
	cout<<dp[n][maxW]<<endl;
}

int main(){
	faster();
	int t;
	cin>>t;
	while(t--){
		cin>>n>>maxW;
		for(int i=1; i<=n; ++i)
			cin>>w[i];
		for(int i=1; i<=n; ++i)
			cin>>val[i];
		Check();	
	}
	return 0;
}

