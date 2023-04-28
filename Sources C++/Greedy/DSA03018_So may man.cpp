#include<bits/stdc++.h>
using namespace std;

int n, check;
vector<int> v;

void Try(int s){
	if(check)
		return;
	if(s == 0){
		sort(v.begin(), v.end());
		for(int i : v)
			cout<<i;
		cout<<endl;
		check = 1;
		return;
	}
	if(s < 0)
		return;
	
	for(int j : {7, 4}){
		v.push_back(j);
		Try(s - j);
		v.pop_back();
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		check = 0;
		if(n > 0)
			Try(n);
		if(!check)
			cout<<-1<<endl;
		v.clear();
	}
	return 0;
} 


