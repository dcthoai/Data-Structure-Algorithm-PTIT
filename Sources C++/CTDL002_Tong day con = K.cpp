#include<bits/stdc++.h>
using namespace std;

int n, k, cnt = 0;

int check(int a[], int b[]){
	int sum = 0;
	for(int i=0; i<n; ++i){
		if(a[i])
			sum+=b[i];
	}
	if(sum==k)
		return 1;
	return 0;
}

void Sinh_nhi_phan(int a[], int b[]){
	while(1){
		if(check(a, b)){
			cnt++;
			for(int i=0; i<n; ++i)
				if(a[i])
					cout<<b[i]<<' ';
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
	cin>>n>>k;
	int a[n] = {0}, b[n];
	for(int &i : b)
		cin>>i;
	Sinh_nhi_phan(a, b);
	cout<<cnt;
	return 0;
}

