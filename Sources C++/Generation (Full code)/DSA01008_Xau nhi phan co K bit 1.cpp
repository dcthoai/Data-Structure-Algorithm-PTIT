#include<bits/stdc++.h>

using namespace std;

int check(string s, int n, int k){
	int cnt = 0;
	for(int i=0; i<n; ++i)
		if(s[i] == '1')
			cnt++;
	if(cnt==k)
		return 1;
	return 0;
}

void Sinh_nhi_phan(string s, int n, int k){
	while(1){
		int j = n-1;
		while(j>=0 && s[j] == '1'){
			s[j] = '0';
			--j;
		}
		if(j<0)
			return;
		s[j] = '1';
		if(check(s, n, k))
			cout<<s<<endl;
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n, k;
		cin>>n>>k;
		string s = "";
		for(int i=0; i<n; ++i)
			s+="0";
		Sinh_nhi_phan(s, n, k);
	}
	return 0;
}

