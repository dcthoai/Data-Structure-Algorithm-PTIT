#include<bits/stdc++.h>
using namespace std;

void nextCobination(int a[], int b[], int n, int k) {
    while(1){
        for(int i=1; i<=k; ++i)
            cout<<b[a[i] - 1]<<' ';
        cout<<endl;
        int i = k;
        while(i>0 && a[i] == n-k+i)
            --i;
        if(i==0)
            return;
        ++a[i];
        for(int j = i+1; j<=k; ++j)
            a[j] = a[i] + j - i;
    }
}

int main() {
    int t, n, k;
    cin>>t;
    while(t--) {
        cin>>n>>k;
        int a[n];
        for(int &i : a)
           cin>>i;
        int b[k+1];
        for(int i=1; i<=k; ++i)
            b[i] = i;
        sort(a, a+n);
        nextCobination(b, a, n, k);
    }
    return 0;
}


