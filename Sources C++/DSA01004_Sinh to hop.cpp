#include<bits/stdc++.h>

using namespace std;

void Sinh_to_hop(int a[], int n, int k){
	while(1){
		int i = k;
		while(i>0 && a[i] == n-k+i)
			--i;
		if(i==0)
			return;
		++a[i];
		for(int j = i+1; j<=k; ++j)
			a[j] = a[i] + j - i;
		cout<<' ';
		for(int i=1; i<=k; ++i)
			cout<<a[i];
	}
}

int main(){
	int t, n, k;
	cin>>t;
	while(t--){
		cin>>n>>k;
		int a[k+1];
		for(int i=1; i<=k; ++i){
			a[i] = i;
			cout<<a[i];
		}
		Sinh_to_hop(a, n, k);
		cout<<endl;
	}
	return 0;
}

