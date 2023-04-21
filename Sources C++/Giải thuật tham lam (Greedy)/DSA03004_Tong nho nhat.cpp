#include<bits/stdc++.h>
using namespace std;

long long sum(int *a, int n){
    string s1 = "", s2 = "";
    for(int i=0; i<n; ++i){
        if(a[i]){
            s1 += to_string(a[i]);
            ++i;
        }
        if(a[i] && i<n)
            s2 += to_string(a[i]);
    }
    return stoll(s1) + stoll(s2);
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
        cout<<sum(a, n)<<endl;
    }
    return 0;
}
