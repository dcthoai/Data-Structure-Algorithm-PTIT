#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main(){
	faster();
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int &i : a)
			cin>>i;
		int cnt = 0;
		for(int i=0; i<n-1; ++i){
			int index = i;
			for(int j=i+1; j<n; ++j){
				if(a[j] < a[index])
					index = j;
			}
			if(index != i)
				++cnt;
			swap(a[i], a[index]);
		}
		cout<<cnt<<endl;
	}
	return 0;
}

