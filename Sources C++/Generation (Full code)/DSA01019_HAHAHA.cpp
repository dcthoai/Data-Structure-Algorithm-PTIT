#include<bits/stdc++.h>
using namespace std;

int check(string s, int n){
	if(s[0] == 'A' || s[n-1] == 'H')
		return 0;
	for(int i=0; i<n-1; ++i)
		if(s[i] == 'H' && s[i+1] == 'H')
			return 0;
	return 1;
}

void Sinh_nhi_phan(string s, int n){
	while(1){
		int j = n-1;
		while(j>=0 && s[j] == 'H'){
			s[j] = 'A';
			--j;
		}
		if(j<0)
			return;
		s[j] = 'H';
		if(check(s, n))
			cout<<s<<endl;
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string s = "";
		for(int i=0; i<n; ++i)
			s+="A";
		Sinh_nhi_phan(s, n);
	}
	return 0;
}

