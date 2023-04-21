#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
using namespace std;

long long luy_thua(long long n, long long k){
    if(k==1)
        return n;
    long long res = luy_thua(n, k/2) % mod;
    res = (res*res) % mod;
    if(k%2 != 0)
        res = (res*n) % mod; 
    return res % mod;
}

int main()
{
    int t, n, k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        cout<<luy_thua(n, k)<<endl;
    }
    return 0;
}


