#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++) 
			cin>>a[i];
        sort(a, a+n);
        long long ans=0;
        for(int i=0; i<n-1; i++){
        	//tra ve vi tri phan tu >= a[i]+k+1 hay co hieu voi a[i] lon hon K
            int pos = upper_bound(a+i+1, a+n, a[i]+k-1) - a;
            ans += pos-i-1;
        }
        cout<<ans<<endl;
    }
}
