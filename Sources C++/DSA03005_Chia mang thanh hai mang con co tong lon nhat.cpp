#include<bits/stdc++.h>
using namespace std;

void print(int *a, int k, int n){
    long long x = 0, y = 0;
    for(int i=0; i<k; ++i)
        x += a[i];
    for(int i=k; i<n; ++i)
        y += a[i];
    cout<<y-x<<endl;
}

int main()
{
    int t, n, k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        int a[n];
        for(int i=0; i<n; ++i)
            cin>>a[i];
        sort(a, a+n);
        if(k <= n/2)
            print(a, k, n);
        else
            print(a, n-k, n);
    }
    return 0;
}
