#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int k;
		string s;
		cin>>k>>s;
		int a[300];
		multiset<int> st;
		memset(a, 0, sizeof(a));
		for(char c : s)
			a[c - 'A']++;
		for(int i : a)
			if(i > 0)
				st.insert(i);
		
		while(k--){
			int temp = *prev(st.end()) - 1;  
			// Prev tra va iterator ngay truoc iterator hien tai
			st.erase(prev(st.end()));
			st.insert(temp);
		}
		long long sum = 0;
		for(int i : st)
			sum += i*i;
		cout<<sum<<endl;
	} 
	return 0;
}

