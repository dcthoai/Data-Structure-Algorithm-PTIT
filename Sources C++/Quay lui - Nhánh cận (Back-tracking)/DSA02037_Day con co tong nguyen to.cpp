#include<bits/stdc++.h>
using namespace std;

int nto(int n){
	if(n<2)
		return 0;
	for(int i=2; i<=sqrt(n); ++i)
		if(n%i == 0)
			return 0;
	return 1;
}

void check(int a[], int b[], int n){
	int sum = 0;
	for(int i=0; i<n; ++i)
		if(a[i])
			sum += b[i];
	if(nto(sum)){
		for(int i=0; i<n; ++i)
			if(a[i])
				cout<<b[i]<<' ';
		cout<<endl;
	}
}

void Sinh_nhi_phan(int a[], int b[], int n){
	while(1){
		check(a, b, n);
		int j = n-1;
		while(j>=0 && a[j] == 1){
			a[j] = 0;
			--j;
		}
		if(j<0)
			return;
		a[j] = 1;
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int &i : a)
			cin>>i;
		sort(a, a+n, greater<int>());
		int b[n];
		memset(b, 0, sizeof(b));
		Sinh_nhi_phan(b, a, n);
	}
	return 0;
}

