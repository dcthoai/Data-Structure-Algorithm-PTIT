#include<bits/stdc++.h>
using namespace std;

long long pow2(int n){
	if(n==0)
        return 1;
    long long res = pow2(n >> 1);
    res = res*res;
    if(n & 1)
        res *= 2;
    return res;
}

long long binaryToDecimal(string s){
	long long num = 0;
	int n = s.size();
	for(int i=0; i<n; ++i)
		if(s[i] == '1')
			num += pow2(n-i-1);	
	return num;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		long long n, m;
		string a, b;
		cin>>a>>b;	
		n = binaryToDecimal(a);
		m = binaryToDecimal(b);
		cout<<n*m<<endl;
	}
	return 0;
}

