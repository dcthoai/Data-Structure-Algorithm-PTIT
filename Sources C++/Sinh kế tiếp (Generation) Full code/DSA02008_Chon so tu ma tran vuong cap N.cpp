#include<bits/stdc++.h>
using namespace std;

int n, k, cnt = 0, a[10][10], b[10], unused[10];
vector<string> v;

void check(int i){
	for(int j=1; j<=n; ++j){
		if(unused[j]){
			unused[j] = 0;
			b[i] = j;
			if(i==n){
				int sum = 0;
				string s = "";
				for(int l=1; l<=n; ++l){
					sum += a[l][b[l]];
					s += to_string(b[l]) + " ";
				}	
				if(sum == k){
					++cnt;
					v.push_back(s);
				}
			}else
				check(i+1);
			unused[j] = 1;
		}
	}
}

int main(){
	cin>>n>>k; 
	for(int i=1; i<=n; ++i)
		for(int j=1; j<=n; ++j)
			cin>>a[i][j];
	memset(unused, 1, sizeof(unused));
	check(1);
	cout<<cnt<<endl;
	for(string i : v)
		cout<<i<<endl;
	return 0;
}

