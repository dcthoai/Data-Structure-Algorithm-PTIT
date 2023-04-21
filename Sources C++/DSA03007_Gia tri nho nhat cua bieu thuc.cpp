#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n], b[n];
        for(int &i : a)
            cin>>i;
        for(int &i : b)
            cin>>i;
        sort(a, a+n);
        sort(b, b+n, greater<int>());
        long long s = 0;
        for(int i=0; i<n; ++i)
            s += a[i]*b[i];
        cout<<s<<endl;
    }
    return 0;
}
