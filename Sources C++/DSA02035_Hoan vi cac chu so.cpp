#include<bits/stdc++.h>
using namespace std;

int n, k, Min = 99999999, a[10], unused[10];
string s[10];

void check(){
	set<string> st;
	for(int i=0; i<n; ++i){
		string token = "";
		for(int j=0; j<k; ++j)
			token += s[i][a[j]];
		st.insert(token);
	}
	int temp = stoi(*st.rbegin()) - stoi(*st.begin());
	Min = min(temp, Min);
}

void back(int i){
	for(int j=0; j<k; ++j){
		if(unused[j]){
			unused[j] = 0;
			a[i] = j;
			if(i==k-1)
				check();
			else
				back(i+1);
			unused[j] = 1;
		}
	}
}

int main(){
	cin>>n>>k;
	for(int i=0; i<n; ++i)
		cin>>s[i];
	for(int i=0; i<k; ++i)
	    a[i] = i;
	memset(unused, 1, sizeof(unused));
	back(0);
	cout<<Min;
	return 0;
}
