#include<bits/stdc++.h>
using namespace std;

void Sinh_nhi_phan_lien_truoc(string s, int n){
	int j = n-1;
	while(j>=0 && s[j] == '0'){
		s[j] = '1';
		--j;
	}
	if(j<0){
		for(int i=0; i<n; ++i)
			cout<<1;
		return;
	}
	s[j] = '0';
	cout<<s;
}

int main(){
	int t;
	string s;
	cin>>t;
	while(t--){
		cin>>s;
		Sinh_nhi_phan_lien_truoc(s, s.size());
		cout<<endl;
	}
	return 0;
}

