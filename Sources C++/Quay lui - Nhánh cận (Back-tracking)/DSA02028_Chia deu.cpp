#include<bits/stdc++.h>
using namespace std;

int n, k, ans = 0, sum = 0;

void Try(int *a, int i, int cnt){
	if(i == n && cnt == k){
		++ans;
		return;
	}
	int s = 0;
	while(i < n){
		s += a[i];
		if(s == sum)
			Try(a, i+1, cnt + 1);
		++i;
	}
}

int main(){
	cin>>n>>k;
	int a[n];
	for(int i=0; i<n; ++i){
		cin>>a[i];
		sum += a[i];
	}
	if(sum % k == 0){
		sum /= k;
		Try(a, 0, 0);
		cout<<ans;
	}else
		cout<<0;
	return 0;
}

