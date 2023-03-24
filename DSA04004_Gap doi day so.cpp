#include<iostream>
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
using namespace std;

inline long long binPow(long long a, long long b) {
    if(!b) 
        return 1;
    long long res = binPow(2, b >> 1); // b/=2
    res = res * res;
    if(b & 1) 						   // b%2 == 1
        res = res << 1;
    return res;
}

inline long long findNum(long long n, long long k) {
    long long x = binPow(2, n - 1);
    if(k == x)
        return n;
    if(k < x)
        return findNum(n - 1, k);
    return findNum(n - 1, k - x);
}

int main(){   
	faster();
    int t;
    cin>>t;
    while(t--) {
        long long n, k;
        cin>>n>>k;
        cout<<findNum(n, k)<<endl;
    }
    return 0;
}
