#include<bits/stdc++.h>
using namespace std;

int n;
vector<int> v;
vector<string> ans;

void print(){
	vector<int> tmp = v;
	sort(tmp.begin(), tmp.end(), greater<int>());
	string s = "(" + to_string(tmp[0]);
	for(int i=1; i<v.size(); ++i)
		s += " " + to_string(tmp[i]);
	s += ")";
	ans.push_back(s);
}

void nextNumber(int n, int i){
	if(n==0)	
		print();
	for(int j=n; j>=i; --j){
		v.push_back(j);
		nextNumber(n-j, j);
		v.pop_back();
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		nextNumber(n, 1);
		cout<<ans[0]<<' ';
		ans.erase(ans.begin());  //in ra va xoa so dau tien vi n>=10 co the loi khi sap xep cac string
		sort(ans.begin(), ans.end(), greater<string>());
		for(string i : ans)
			cout<<i<<' ';
		cout<<endl;
		ans.clear();
		v.clear();
	} 
	return 0;
}


