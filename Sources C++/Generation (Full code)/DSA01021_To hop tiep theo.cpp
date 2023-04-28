#include<bits/stdc++.h>
using namespace std;

void check(int a[], int b[], int k){
	set <int> ans;
	for(int i=1; i<=k; ++i){
		ans.insert(a[i]);
		ans.insert(b[i]);
	}
	cout<<ans.size()-k<<endl;
}

void Sinh_to_hop(int a[], int b[], int n, int k){
	int i = k;
	while(i>0 && a[i] == n-k+i)
		--i;
	if(i==0){
		cout<<k<<endl;
		return;
	}	
	a[i]++;
	for(int j=i+1; j<=k; ++j)
		a[j] = a[i]+j-i;
	check(a, b, k);
}

int main(){
	int t, n, k;
	cin>>t;
	while(t--){
		cin>>n>>k;
		int a[k], b[k];
		for(int i=1; i<=k; ++i){
			cin>>a[i];
			b[i] = a[i];
		}
		Sinh_to_hop(a, b, n, k);
	}
	return 0;
}

