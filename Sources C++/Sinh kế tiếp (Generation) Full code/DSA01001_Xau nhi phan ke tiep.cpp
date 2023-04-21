#include<bits/stdc++.h>
using namespace std;

void Sinh_nhi_phan(string a, int n){
	int j = n-1;
	while(j>=0 && a[j] == '1'){
		a[j] = '0';
		j--;
	}
	if(j<0){
		cout<<'0'<<a<<endl;
		return;
	}else
		a[j] = '1';
	cout<<a<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		Sinh_nhi_phan(s, s.size());
	}
	return 0;
}
