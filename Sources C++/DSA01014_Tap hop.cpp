#include<bits/stdc++.h>
using namespace std;

int n, k, s, cnt = 0, a[21];

int check(){
	int sum = 0;
	for(int i=1; i<=k; ++i)
		sum += a[i];
	return sum == s;
}

void Sinh_to_hop(){
	while(1){
		if(check())
			++cnt;
		int i = k;
		while(i>0 && a[i] == n-k+i)
			--i;
		if(i==0)
			return;
		++a[i];
		for(int j = i+1; j<=k; ++j)
			a[j] = a[i] + j - i;
	}
}

int main(){
	while(1){
		cnt = 0;
		cin>>n>>k>>s;
		if(!n && !k && !s)
			break;
		for(int i=1; i<=k; ++i)
			a[i] = i;
		if(n<k)
			cout<<0<<endl;
		else{
			Sinh_to_hop();
			cout<<cnt<<endl;
		}
	}
	return 0;
}

