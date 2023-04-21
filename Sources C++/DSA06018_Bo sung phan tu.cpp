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
        int a[n], cnt = 0;
        for(int &i : a) 
              cin>>i;
        sort(a, a+n);
        for(int i=1; i<n; i++)
              if(a[i]-a[i-1]>1)
                   cnt+=a[i]-a[i-1]-1;
        cout<<cnt<<endl;
    }
	return 0;
}

