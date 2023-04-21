#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s1, s2 = "";
		cin>>s1;
		s2 += s1[0];
		for(int i=1; i<s1.size(); ++i)
			if(s1[i] == s1[i-1])
				s2 += '0';
			else
				s2 += '1';
		cout<<s2<<endl;
	}
	return 0;
}

