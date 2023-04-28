#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main() {
    faster();
    int t;
    cin>>t;
    while(t--) {
        long long n, m;
        cin>>n>>m;
        long long a[n], b[m];
        for(long long &i : a)
            cin>>i;
        for(long long &i : b)
            cin>>i;
        sort(a, a+n);
        sort(b, b+m);
        cout<<a[n-1]*b[0]<<endl;
    }
    return 0;
}
