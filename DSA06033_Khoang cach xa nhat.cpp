#include<bits/stdc++.h>
using namespace std;

int check(int *a, int n){
	stack<int> ans;
	ans.push(0);
	for(int i=1; i<n; ++i)
		if(a[ans.top()] > a[i])
			ans.push(i);
	//  Stack chua vi tri cac phan tu cua day con giam dan
	int i = n-1, space, maxSpace = 0;
	while(i>=0){
		if(!ans.empty() && a[ans.top()] < a[i]){
			space = i-ans.top();
			maxSpace = max(space, maxSpace);
			ans.pop();
			continue;
		}
		--i;
	}
	// Duyet tu cuoi mang va so sanh voi cac vi tri luu trong Stack de tim khoang cach lon nhat
	return (maxSpace > 0) ? maxSpace : -1;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int &i : a)
			cin>>i;
		cout<<check(a, n)<<endl;
	}
	return 0;
}

