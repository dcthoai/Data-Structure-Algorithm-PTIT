#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n], b[n];
		for(int &i : a)
			cin>>i;
		for(int &i : b)
			cin>>i;
		for(int i=0; i<n-1; ++i)
			for(int j=i+1; j<n; ++j)
				if(b[j] < b[i]){
					swap(a[i], a[j]);
					swap(b[i], b[j]);
				}
		int cnt = 1, time = b[0];
		for(int i=1; i<n; ++i){
			if(a[i] >= time){
				cnt++;
				time = b[i];
			}
		}
		cout<<cnt<<endl;
	}
	return 0;
}

