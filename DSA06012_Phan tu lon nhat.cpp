#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main(){
	faster();
	int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        int a[n], cnt = 0;
        for(int i=0; i<n; ++i)
            cin>>a[i];
        sort(a, a+n);
        for(int i=n-1; i>n-k-1; --i)
            cout<<a[i]<<' ';
        cout<<endl;
    }
	return 0;
}

