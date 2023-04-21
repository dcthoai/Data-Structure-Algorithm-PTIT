#include<bits/stdc++.h>
using namespace std;

string check(int *a, int n, int ans){
	int j, k;
	sort(a, a+n);
	for(int i=0; i<=n-3; ++i){
		j = i+1, k = n-1;
		while(j < k){
			if(a[i] + a[j] + a[k] == ans)
				return "YES";
			else{
				if(a[i] + a[j] + a[k] > ans)
					--k;
				else
					++j;
			}
		}
	}
	return "NO";
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n, k;
		cin>>n>>k;
		int a[n];
		for(int &i : a)
			cin>>i;
		cout<<check(a, n, k)<<endl;
	} 
	return 0;
}
