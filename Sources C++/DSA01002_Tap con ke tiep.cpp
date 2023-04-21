#include<bits/stdc++.h>

using namespace std;

void Sinh_to_hop(int a[], int n, int k){
	int i = k;
	while(i>0 && a[i] == n-k+i)
		i--;
	if(!i)
		return;
	a[i]++;
	for(int j = i+1; j<=k; ++j)
		a[j] = a[i] + j - i;
	for(int i=1; i<=k; ++i)
		cout<<a[i]<<' ';
	cout<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n, k;
		cin>>n>>k;
		int a[k+1];
		for(int i=1; i<=k; i++)
			cin>>a[i];
		Sinh_to_hop(a, n, k);
	}
	return 0;
}

