#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int &i : a)
		cin>>i;
	cout<<"Buoc 0: "<<a[0]<<endl;
	for(int i=1; i<n; ++i) {
		int x = a[i];
		int pos = i-1;
		while(pos>=0 && a[pos] > x) {
			a[pos+1] = a[pos];
			pos--;
		}
		a[pos+1] = x;
		cout<<"Buoc "<<i<<": ";
		for(int j=0; j<=i; ++j)
			cout<<a[j]<<" ";
		cout<<endl;
	}
	return 0;
}
