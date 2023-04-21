#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int n, a[1005], s, test;

void check(int x, int i){
	if(test)
		return;
	if(x==s){
		test = 1;
		return;
	}
	if(x > s)
		return;
	for(int j=i; j<n; ++j)
		check(x+a[j], j+1);
}

int main(){
	faster();
	int t;
	cin>>t;
	while(t--){
		cin>>n>>s;
		int sum = 0;
		test = 0;
		for(int i=0; i<n; ++i){
			cin>>a[i];
			sum += a[i];
		}
		if(s > sum)
			cout<<"NO"<<endl;
		else{
			check(0, 0);
			if(test)
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
		}
	}
	return 0;
}
