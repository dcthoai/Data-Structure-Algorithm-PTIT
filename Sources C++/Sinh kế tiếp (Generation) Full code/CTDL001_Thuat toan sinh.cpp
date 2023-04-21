#include<bits/stdc++.h>
using namespace std;

int check(int a[], int n){
	for(int i=0; i<=n/2; ++i)
		if(a[i] != a[n-1-i])
			return 0;
	return 1;
}

void Sinh_nhi_phan(int a[], int n){
	while(1){
		if(check(a, n)){
			for(int i=0; i<n; ++i)
				cout<<a[i]<<' ';
			cout<<endl;
		}
		int j = n-1;
		while(j>=0 && a[j] == 1)
			j--;
		if(j<0)
			return;
		for(int i=j; i<n; ++i)
			a[i] = 0;
		a[j] = 1;
	}
}

int main(){
	int n;
	cin>>n;
	int a[n] = {0};
	Sinh_nhi_phan(a, n);
	return 0;
}

