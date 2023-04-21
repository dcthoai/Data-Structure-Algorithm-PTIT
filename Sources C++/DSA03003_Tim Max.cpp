#include<bits/stdc++.h>
using namespace std;

long m = 1E9 + 7;

long long print(int *a, int n){
    long long sum = 0;
    for(int i=1; i<n; ++i){
        sum += a[i]*i;
        sum %= m;
    }
    return sum;
}

int main()
{
    int t, n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        for(int i=0; i<n; ++i)
            cin>>a[i];
        sort(a, a+n);
        cout<<print(a, n)<<endl;
    }
    return 0;
}
