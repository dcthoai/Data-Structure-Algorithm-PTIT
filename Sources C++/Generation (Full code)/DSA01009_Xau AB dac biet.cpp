#include<bits/stdc++.h>
using namespace std;

string a;
int n, k, ans = 0;
vector<string> v;

int check(){
	int cnt = 0, test = 0, x = a.size();
	for(int i=0; i<x; ++i){
		if(a[i] == 'A')
			++cnt;
		if(a[i] == 'B' || i==n-1){
			if(cnt == k)
				test = 1;
			if(cnt > k)
				test = 2;
			cnt = 0;
		}
	}
	if(test == 1)
		return 1;
	return 0;
}

void stringAB(int i){
	for(char j='A'; j<='B'; ++j){
		a[i] = j;
		if(i==n-1){
			if(check()){
				ans++;
				v.push_back(a);
			}	
		}else
			stringAB(i+1);
	}
} 

int main(){
	cin>>n>>k;
	for(int i=1; i<=n; ++i)
		a += "A";
	stringAB(0);
	cout<<ans<<endl;
	for(string i : v)
		cout<<i<<endl;
	return 0;
}

