#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n], b[7];
	for(int &i : a)
		cin>>i;
	sort(a, a+n);
	b[0] = a[0]*a[1];
	b[1] = a[0]*a[1]*a[2];
	b[2] = a[n-2]*a[n-1];
	b[3] = a[n-3]*a[n-2]*a[n-1];
	b[4] = a[0]*a[n-1]*a[n-2];
	b[5] = a[0]*a[1]*a[n-1];
	b[6] = a[0]*a[n-1];
	sort(b, b+7);
	cout<<b[6];	
	return 0;
}

