#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	vector<string> v;
	string s = "";
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int &i : a)
			cin>>i;
		for(int i=0; i<n-1; ++i){
			for(int j=i+1; j<n; ++j)
				if(a[j] < a[i])
					swap(a[i], a[j]);
			s += "Buoc " + to_string(i+1) + ": ";
			for(int j : a)
				s += to_string(j) + " ";
			v.push_back(s);
			s = "";
		}
		for(int i=v.size()-1; i>=0; --i)
			cout<<v[i]<<endl;
		v.clear();
	}
	return 0;
}

