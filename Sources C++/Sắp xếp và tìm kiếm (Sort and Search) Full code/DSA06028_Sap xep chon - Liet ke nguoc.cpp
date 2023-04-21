#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int &i : a)
		cin>>i;
	vector<string> v;
	string s = "";
	for(int i=0; i<n-1; ++i) {
		int min = i;
		for(int j=i+1; j<n; ++j)
			if(a[j] < a[min])
				min = j;
		if(min != i)
			swap(a[i], a[min]);
		s += "Buoc " + to_string(i+1) + ": ";
		
		for(int j : a)
			s += to_string(j) + " ";
		v.push_back(s);
		s = "";
	}
	for(int i = v.size()-1; i>=0; --i)
		cout<<v[i]<<endl;
	return 0;
}

