#include<bits/stdc++.h>
using namespace std;

int check(string s, int n){
	if(s[n-1]=='8')
		return 0;
	for(int i=0; i<n-1; ++i)
		if(s[i]=='8' && s[i+1]=='8')
			return 0;
	for(int i=0; i<n; ++i){
		int cnt = 0;
		while(s[i]=='6' && i++)
			++cnt;
		if(cnt>3)
			return 0;
	}
	return 1;
}

void Sinh_nhi_phan_68(string s, int n){
	while(1){
		int j = n-1;
		while(j>=0 && s[j] == '8'){
			s[j] = '6';
			--j;
		}
		if(j<0)
			return;
		s[j] = '8';
		if(check(s, n))
			cout<<s<<endl;
	}
}

int main(){
	int n;
	cin>>n;
	string s = "8";
	for(int i=1; i<n; ++i)
		s+="6";
	Sinh_nhi_phan_68(s, n);
	return 0;
}

