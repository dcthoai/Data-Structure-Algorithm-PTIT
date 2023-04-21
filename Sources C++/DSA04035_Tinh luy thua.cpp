#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

const long long mod = 1e9 + 7;

long long luy_thua(long long n, long long k){
    if(k==0)
        return 1;
    long long res = luy_thua(n, k>>1);
    res = (res*res) % mod;
    if(k & 1)
        res = (res*n) % mod; 
    return res;
}

int main(){
    faster();
    long long a, b;
    while(1){
        cin>>a>>b;
        if(a==0 && b==0)
            return 0;
        cout<<luy_thua(a, b)<<endl;  
    }
    return 0;
}
