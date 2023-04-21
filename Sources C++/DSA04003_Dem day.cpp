#include<iostream>
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
using namespace std;

const long long mod = 123456789;

long long exponential(long long n, long long k){
    if(k==1)
        return n;
    long long res = exponential(n, k/2) % mod;
    res = (res*res) % mod;
    if(k%2 != 0)
        res = (res*n) % mod;
    return res % mod;
}


int main()
{   faster();
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        cout<<exponential(2, n-1)<<endl;
    }
    return 0;
}
