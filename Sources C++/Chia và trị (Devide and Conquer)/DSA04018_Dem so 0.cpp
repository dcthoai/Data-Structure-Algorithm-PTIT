#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main(){
	faster();
	int t;
	cin>>t;
	while(t--){
		int n, x, cnt = 0;
		cin>>n;
		for(int i=0; i<n; ++i){
			cin>>x;
			if(x==0)
				++cnt;
		}
		cout<<cnt<<endl;
	}	
	return 0;
}

