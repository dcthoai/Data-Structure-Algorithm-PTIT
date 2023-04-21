#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
using namespace std;
const int mod = 1e9 + 7;
unordered_map<long long, long long> fi;

long long f(long long n){
    if(fi[n]) 
		return fi[n];
    long long k = n >> 1; // k = n/2
    if(n & 1)  // n le
		return fi[n] = (f(k)*f(k+1) + f(k)*f(k-1)) % mod;
    return fi[n] = (f(k)*f(k) + f(k-1)*f(k-1)) % mod;
	// Ap dung cong thuc ma tran fibonacci
}

int main() {
    faster();
    fi[0] = fi[1] = 1;
    int t, n;
    cin>>t;
    while(t--) {
        cin>>n;
        if(n==0)
        	cout<<0<<endl;
        else
        	cout<<f(n-1)<<endl;
    }
    return 0;
}
