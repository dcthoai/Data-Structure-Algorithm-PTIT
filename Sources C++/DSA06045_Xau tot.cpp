#include <bits/stdc++.h>
using namespace std;
 
long long n;
string s;
 
void solve() {
	cin >> n >> s;
	long long cnt = 1;
	vector<long long> v;
	for(long long i=1; i<n; i++){
		if(s[i] == s[i-1])
			cnt++;
		else{
			v.push_back(cnt);
			cnt = 1;
		}
	}
	v.push_back(cnt);
	long long sum = 0, m = v.size()-1;	
	for(int i=0; i<m; i++)
		sum += (v[i] + v[i+1] - 1);
	// VD: AAABB - 3A 2B -> xau con xau la AAAB, AAB, AB, ABB = 3+2-1 (chon 2 lan xau AB nen tinh 1 lan)
	cout << n*(n-1)/2 - sum<<endl;  // So xau tot bang tong so xau con - xau xau
}
 
int main() {
	solve();
}
