#include<iostream>
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
using namespace std;

const long long mod = 1e9 + 7;

long long reverse_(long long n){
    long long a = 0;
    while(n>0){
        a = a*10 + n%10;
        n/=10;
    }
    return a;
}

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
        long long n, m;
        cin>>n;
        m = reverse_(n);
        cout<<exponential(n, m)<<endl;
    }
    return 0;
}
