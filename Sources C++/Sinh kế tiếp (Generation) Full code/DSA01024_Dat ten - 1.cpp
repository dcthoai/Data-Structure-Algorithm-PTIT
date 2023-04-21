#include<bits/stdc++.h>
using namespace std;

void Sinh_to_hop(string s[], int n, int k){
	int a[k+1];
	for(int i=1; i<=k; ++i)
		a[i] = i;
	while(1){
		for(int i=1; i<=k; ++i)
			cout<<s[a[i]]<<' ';
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
	int n, k, j = 1;
	cin>>n>>k;
	string name[n+1], s;
	set<string> ss;
	for(int i=1; i<=n; ++i){
		cin>>s;
		ss.insert(s);
	}
	for(string i : ss)
		name[j++] = i;
	Sinh_to_hop(name, j-1, k);
	return 0;
}

