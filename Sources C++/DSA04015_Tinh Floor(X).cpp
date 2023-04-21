#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main(){
	faster();
	long long t, n, x;
	cin>>t;
	while(t--){
		cin>>n>>x;
		long long a[n];
		for(long long &i : a)
			cin>>i;
		if(x < a[0])
			cout<<-1<<endl;
		else
			for(int i=0; i<n; ++i)
				if(a[i] > x){
					cout<<i<<endl;
					break;
				}
	}
	
	return 0;
}

