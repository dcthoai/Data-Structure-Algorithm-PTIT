#include<bits/stdc++.h>
using namespace std;

void Sinh_hoan_vi(string a, string b, int n){
	int cnt = 1;
	while(1){
		if(a==b){
			cout<<cnt<<endl;
			return;
		}
		int j = n-2;
		while(j>=0 && a[j] > a[j+1])
			--j;
		if(j<0)
			return;
		int i = n-1;
		while(a[j] > a[i])
			--i;
		swap(a[i], a[j]);
		int l = j+1, r = n-1;
		while(l<r){
			swap(a[l], a[r]);
			++l;
			--r;
		}
		++cnt;
	}
}

int main(){
	int t, n;
	cin>>t;
	while(t--){
		cin>>n;
		int a[n];
		for(int &i : a)
			cin>>i;
		string x = "", y = "";
		for(int i=0; i<n; i++){
			x+=to_string(i+1);
			y+=to_string(a[i]);
		}
		Sinh_hoan_vi(x, y, n);
	}
	return 0;
}

