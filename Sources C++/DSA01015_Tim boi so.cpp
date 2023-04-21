#include<bits/stdc++.h>
using namespace std;

string s;
vector<long long> v;

void nextString(int j){
	s = "";
	for(int i=1; i<=j; ++i)
		s += "0";
	while(1){
		long long a = stoll("9" + s);
		v.push_back(a);
		int i = j-1;
		while(i>=0 && s[i] == '9'){
			s[i] = '0';
			--i;
		}
		if(i<0)
			return;
		s[i] = '9';
	}
}

int main(){
	v.push_back(9);
	for(int i=1; i<=11; ++i)
		nextString(i);
	int t, n;
	cin>>t;
	while(t--){
		cin>>n;
		int ans = 0;
		while(v[ans] % n)
			++ans;
		cout<<v[ans]<<endl;	   
	}
	return 0;
}
