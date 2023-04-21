#include<bits/stdc++.h>
using namespace std;

int n, maxW, w[1005], v[1005];

void runCase(){
    int dp[n+1][maxW+1];
    memset(dp, 0, sizeof(dp));
	for(int i=1; i<=n; ++i){
		for(int j=1; j<=maxW; ++j){
			dp[i][j] = dp[i-1][j];
			if(j >= w[i]){
				int tmp = dp[i-1][j-w[i]] + v[i];
				dp[i][j] = (dp[i-1][j] > tmp) ? dp[i-1][j] : tmp;
			}
		}
	}
	int res = dp[n][maxW], j = maxW;
	cout<<res<<endl;
    for(int i=n; i>0; --i){
	    if(dp[i][j] != dp[i-1][j]){
	        cout<<1<<" ";
	        j -= w[i];
	    }else 
			cout<<0<<" ";
	}  
}

int main() {
    cin >> n >> maxW;
    for(int i=1; i<=n; ++i)
        cin >> v[i];
    for(int i=1; i<=n; ++i)
        cin >> w[i];
    runCase();
}
