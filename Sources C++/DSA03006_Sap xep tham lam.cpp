#include<bits/stdc++.h>
using namespace std;

int check(int *a, int *b, int n){
    for(int i=0; i<=n/2; ++i)
        if(a[i] != b[i] && a[n-i-1] != b[i])
            return 0;
    return 1;
}

int main()
{
    int t, n, k;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n], b[n];
        for(int i=0; i<n; ++i){
            cin>>a[i];
            b[i] = a[i];
        }
        sort(b, b+n);
        if(check(a, b, n))
            cout<<"Yes";
        else 
            cout<<"No";
        cout<<endl;
    }
    return 0;
}
