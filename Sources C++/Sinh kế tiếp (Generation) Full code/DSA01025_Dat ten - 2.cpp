#include<bits/stdc++.h>
using namespace std;

void Sinh_to_hop(string s, int n, int k){
	int a[k+1];
	for(int i=1; i<=k; ++i)
		a[i] = i;
	while(1){
		for(int i=1; i<=k; ++i)
			cout<<s[a[i]];
		cout<<endl;
		int i = k;
		while(i>0 && a[i] == n-k+i)
			--i;
		if(i==0)
			return;
		++a[i];
		for(int j = i+1; j<=k; ++j)
			a[j] = a[i] + j - i;
	}
}

int main(){
	int t, n, k;
	cin>>t;
	while(t--){
		cin>>n>>k;
		string s = "";
		for(int i=0; i<=n; ++i)
			s+="A";
		for(int i=1; i<=n; ++i)
			s[i] = i+'A'-1;
		Sinh_to_hop(s, n, k);
	}
	return 0;
}

