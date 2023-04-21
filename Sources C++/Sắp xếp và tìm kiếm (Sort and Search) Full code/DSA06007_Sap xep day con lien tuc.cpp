#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main(){
	faster();
	int t, n;
	cin>>t;
	while(t--){
		cin>>n;
		int a[n], b[n], r, l;
		for(int i=0; i<n; ++i){
			cin>>a[i];
			b[i] = a[i];
		}
		sort(a, a+n);
		for(int i=0; i<n; ++i)
			if(a[i] != b[i]){
				l = i+1;
				break;
			}
		
		for(int i=n-1; i>0; --i)
			if(a[i] != b[i]){
				r = i+1;
				break;
			}
		cout<<l<<' '<<r<<endl;
	}
	return 0;
}

