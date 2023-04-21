#include<bits/stdc++.h>
using namespace std;

int pytago(long long *a, int n) {
    for(int i=n-1; i>1; i--) {
        int l=0, r=i-1;
        while(l<r) {
            if(a[l]+a[r]==a[i])           
                return 1;
            else {
                if(a[l]+a[r]>a[i])         
                    r--;
                else                   
                    l++;
            }
        }
    }
    return 0;
}
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        long long a[n], m;
        for(int i=0; i<n; i++) {
            cin>>m;
            a[i] = m*m;
        }
        sort(a, a+n);
        if(pytago(a, n))             
            cout<<"YES"<<endl;
        else            
            cout<<"NO"<<endl;
    }
    return 0;
}
