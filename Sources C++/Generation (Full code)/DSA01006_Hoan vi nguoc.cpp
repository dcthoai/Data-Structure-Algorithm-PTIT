#include<bits/stdc++.h>

using namespace std;

void Sinh_hoan_vi_nguoc(int a[], int n){
	while(1){
		int j = n-1;
		while(j>0 && a[j] < a[j+1])
			--j;
		if(j==0)
			return;
		int i = n;
		while(a[j] < a[i])
			--i;
		swap(a[i], a[j]);
		int l = j+1, r = n;
		while(l<r){
			swap(a[l], a[r]);
			++l;
			--r;
		}
		cout<<' ';
		for(int i=1; i<=n; ++i)
			cout<<a[i];
	}
}

int main(){
	int t, n;
	cin>>t;
	while(t--){
		cin>>n;
		int a[n+1];
		for(int i=n; i>0; --i){
			a[n-i+1] = i;
			cout<<i;
		}
		Sinh_hoan_vi_nguoc(a, n);
		cout<<endl;
	}
	return 0;
}


