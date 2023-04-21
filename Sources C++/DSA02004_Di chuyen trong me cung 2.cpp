#include<bits/stdc++.h>
using namespace std;

int a[10][10], unused[10][10], n;
string s;
vector<string> v;

void check(int i, int j){
	if(i==n && j==n){
		v.push_back(s);
		return;
	}
	if(a[i+1][j] && i<n && unused[i+1][j]){
		unused[i][j] = 0;
		s += 'D';
		check(i+1, j);
		s.erase(s.length()-1, 1);
		unused[i][j] = 1;
	}
	if(a[i][j-1] && j>1 && unused[i][j-1]){
		unused[i][j] = 0;
		s += 'L';
		check(i, j-1);
		s.erase(s.length()-1, 1);
		unused[i][j] = 1;
	}
	if(a[i][j+1] && j<n && unused[i][j+1]){
		unused[i][j] = 0;
		s += 'R';
		check(i, j+1);
		s.erase(s.length()-1, 1);
		unused[i][j] = 1;
	}
	if(a[i-1][j] && i>1 && unused[i-1][j]){
		unused[i][j] = 0;
		s += 'U';
		check(i-1, j);
		s.erase(s.length()-1, 1);
		unused[i][j] = 1;
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=1; i<=n; ++i)
			for(int j=1; j<=n; ++j)
				cin>>a[i][j];
		s = "";
		memset(unused, 1, sizeof(unused));
		if(a[1][1]){
			check(1, 1);
			if(v.size()){
				for(string i : v)
					cout<<i<<' ';
				cout<<endl;
				v.clear();
			}else
				cout<<-1<<endl;
		}else
			cout<<-1<<endl;
	}
	return 0;
}
