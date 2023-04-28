#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		map<char, int> mp;
		for(int i=0; i<s.length(); ++i)
			mp[s[i]]++;
		int n = s.size()/2, test = 1;
		if(s.size() % 2 != 0)
			++n;
		for(auto it = mp.begin(); it != mp.end(); ++it){
        	if(it->second > n){
        		cout<<-1<<endl;
        		test = 0;
        		break;
			}
		}
		if(test)
			cout<<1<<endl;
	}
	return 0;
}

