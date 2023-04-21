#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n], ans=100000;
        for(int &i : a)
            cin>>i;
        sort(a, a+n);
        for(int i=1; i<n; ++i){
            int test = a[i] - a[i-1];
            ans = (test < ans) ? test : ans;
        }
        cout<<ans<<endl;
    }
    return 0;
}
