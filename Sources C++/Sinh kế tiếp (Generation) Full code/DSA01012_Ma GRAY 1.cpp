#include<bits/stdc++.h>
using namespace std;

int n, a[11];

void nextGray(int i){
	for(int j=0; j<=1; ++j){
		a[i] = j;
		if(i==n){
			cout<<a[1];
			for(int l=2; l<=n; ++l)
				if(a[l] == a[l-1])
					cout<<0;
				else
					cout<<1;
			cout<<" ";
		}else
			nextGray(i+1);
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		nextGray(1);
		cout<<endl;
	}
	return 0;
}

