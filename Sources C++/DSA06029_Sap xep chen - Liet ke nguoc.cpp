#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int &i : a)
		cin>>i;
	vector<string> v;
	string s = "Buoc 0: " + to_string(a[0]);
	v.push_back(s);
	s = "";
	for(int i=1; i<n; ++i){
		int x = a[i];
		int pos = i-1;
		while(pos>=0 && a[pos] > x){
			int tmp = a[pos];
			a[pos+1] = tmp;
			pos--;
		}
		a[pos+1] = x;
		s += "Buoc " + to_string(i) + ": ";
		for(int j=0; j<=i; ++j)
			s += to_string(a[j]) + " ";
		v.push_back(s);
		s = "";
	}
	for(int i=v.size()-1; i>=0; --i)
		cout<<v[i]<<endl;
	return 0;
}

