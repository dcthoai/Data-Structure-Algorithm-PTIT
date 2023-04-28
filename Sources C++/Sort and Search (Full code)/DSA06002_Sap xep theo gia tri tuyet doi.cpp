#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int n, k;

bool cmp(int a, int b){
	return abs(a-k) < abs(b-k);
}

int main(){
	faster();
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		int a[n];
		for(int &i : a)
			cin>>i;
		stable_sort(a, a+n, cmp);
		for(int i : a)
			cout<<i<<' ';
		cout<<endl;
	}
	return 0;
}

