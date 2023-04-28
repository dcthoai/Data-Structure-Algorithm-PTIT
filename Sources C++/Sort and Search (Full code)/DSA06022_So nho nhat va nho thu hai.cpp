#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n, x;
		cin>>n;
		set<int> s;
		for(int i=0; i<n; ++i){
			cin>>x;
			s.insert(x);
		}
		if(s.size() < 2)
			cout<<-1<<endl;
		else{
			int c = 0;
			for(int i : s){
				if(c==2)
					break;
				cout<<i<<' ';
				++c;
			}
			cout<<endl;
		}
	}
	return 0;
}

