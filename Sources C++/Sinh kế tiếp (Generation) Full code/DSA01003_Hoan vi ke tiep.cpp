#include<bits/stdc++.h>
using namespace std;

void Sinh_hoan_vi(int a[], int n){
	int j = n-1;
	while(j>0 && a[j] > a[j+1])
		--j;
	if(j==0){
		for(int i=n; i>0; --i)
			cout<<a[i]<<' ';
		cout<<endl;
		return;
	}
	int i = n;
	while(a[j] > a[i])
		--i;
	swap(a[i], a[j]);
	int l = j+1, r = n;
	while(r!=l){
		swap(a[l], a[r]);
		++l;
		--r;
	}
	for(int i=1; i<=n; ++i)
		cout<<a[i]<<' ';
	cout<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n+1];
		for(int i=1; i<=n; ++i)
			cin>>a[i];
		Sinh_hoan_vi(a, n);
	}
	return 0;
}

