#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int &i : a)
			cin>>i;
		string s = "";
		vector<string> v;
		int test = 1, check = 0;
		for(int i=n-1; i>0; --i) {
			check = 0;
			for(int j=0; j<i; ++j) {
				if(a[j] > a[j+1]) {
					swap(a[j], a[j+1]);
					check = 1;
				}
			}
			if(check) {
				s += "Buoc " + to_string(test) + ": ";
				for(int j : a)
					s += to_string(j) + " ";
				v.push_back(s);
				s = "";
				test++;
			}else
				break;
		}
		for(int i=v.size()-1; i>=0; --i)
			cout<<v[i]<<endl;
	}
	return 0;
}

