#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main(){
	faster();
	int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int a[n];
        for(int &i : a)            
             cin>>i;
        sort(a, a+n);
        int b[n], cnt = 0;
        for(int i=0; i<n; i++) {
            b[i++] = a[n-cnt-1];
            b[i] = a[cnt];
            cnt++;
        }
        for(int i : b)             
            cout<<i<<' ';
        cout<<endl;
    }
	return 0;
}

