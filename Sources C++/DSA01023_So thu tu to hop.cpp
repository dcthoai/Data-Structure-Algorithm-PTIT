#include<bits/stdc++.h>
using namespace std;

int check(int a[], int b[], int k){
	for(int i=1; i<=k; ++i)
		if(a[i] != b[i])
			return 0;
	return 1;
}

void Sinh_to_hop(int a[], int b[], int n, int k){
	int cnt = 1;
	while(1){
		if(check(a, b, k)){
			cout<<cnt<<endl;
			return;
		}
		int i = k;
		while(i>0 && a[i] == n-k+i)
			--i;
		if(i==0)
			return;
		++a[i];
		for(int j = i+1; j<=k; ++j)
			a[j] = a[i] + j - i;
		++cnt;
	}
}

int main(){
	int t, n, k;
	cin>>t;
	while(t--){
		cin>>n>>k;
		int a[k+1], b[k+1];
		for(int i=1; i<=k; ++i){
			cin>>b[i];
			a[i] = i;
		}
		Sinh_to_hop(a, b, n, k);
	}
	return 0;
}

