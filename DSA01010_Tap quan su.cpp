#include<bits/stdc++.h>
using namespace std;

void nextCombiantion(int *a, int n, int k){
	set<int> check;
	for(int i=1; i<=k; ++i)
		check.insert(a[i]);
	int i = k;
	while(i>0 && a[i] == n-k+i)
		--i;
	if(i==0){
		cout<<k<<endl;
		return;
	}
	++a[i];
	check.insert(a[i]);
	for(int j=i+1; j<=k; ++j){
		a[j] = a[i] + j - i;
		check.insert(a[j]);
	}
	cout<<check.size() - k<<endl;
}

int main(){
	int t, n, k;
	cin>>t;
	while(t--){
		cin>>n>>k;
		int a[k+1];
		for(int i=1; i<=k; ++i)
			cin>>a[i];
		nextCombiantion(a, n, k);
	}
	return 0;
}

