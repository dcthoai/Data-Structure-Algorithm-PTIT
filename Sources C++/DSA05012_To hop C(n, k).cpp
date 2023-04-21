#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
using namespace std;
const long long mod = 1e9 + 7;

long long calc(int n, int k) {
    vector<long long> invert(k + 1, 0);
    invert[0] = 1;
    if(k > 0) 
        invert[1] = 1;
    for(int i=2; i<=k; ++i) 
        invert[i] = mod - (mod/i) * invert[mod % i] % mod;  
	// C(n, k) = n! / [k! * (n-k)!] = [n*(n-1)*...*(n-k+1)] / k! (rut gon (n-k)! cua ket qua)
	// invert[i] la nghich dao modulo cua i % mod 
	
    int res = 1;
    for(int i=2; i<=k; ++i) 
        res = ((res % mod) * (invert[i] % mod)) % mod;	
	//res = 1/k! bang cach nhan cac nghich dao modulo cua i % mod tu 1 -> k
	
    int ed = n-k+1;
    for(int i=n; i>=ed; --i) 
        res = ((res % mod) * (i % mod)) % mod;	// res*n*(n-1)*....*(n-k+1) -> C(n, k)
    return res;
}

int main() {
    faster();
    int t, n, k;
    cin >> t;
    while(t--) {
        cin>>n>>k;
        cout<<calc(n, k)<<endl;
    }
    return 0;
}
/*
#include<bits/stdc++.h> 
using namespace std;
const int mod = 1e9 + 7;

int main() {
    long long dp[1001][1001];
    memset(dp, 0, sizeof(dp));
    dp[1][0] = dp[1][1] = dp[0][0] = 1;
    for(int i=2; i<=1000; ++i){
        dp[i][0] = 1;
        for(int j=1; j<=1000; ++j)
            dp[i][j] = (dp[i-1][j-1] + dp[i-1][j]) % mod;
    }
    int t, n, k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        cout<<dp[n][k]<<endl;
    }
    return 0;
}	
*/
