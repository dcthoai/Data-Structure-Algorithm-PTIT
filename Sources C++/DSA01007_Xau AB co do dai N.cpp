#include<bits/stdc++.h>

using namespace std;

void nextAB(string s, int n){
	while(1){
		int j = n-1;
		while(j>=0 && s[j] == 'B'){
			s[j] = 'A';
			--j;
		}
		if(j<0)
			return;
		s[j] = 'B';
		cout<<s<<' ';
	}
}

int main(){
	int t, n;
	cin>>t;
	while(t--){
		cin>>n;
		string s = "";
		for(int i=0; i<n; ++i)
			s+="A";
		cout<<s<<' ';
		nextAB(s, n);
		cout<<endl;
	}
	return 0;
}

