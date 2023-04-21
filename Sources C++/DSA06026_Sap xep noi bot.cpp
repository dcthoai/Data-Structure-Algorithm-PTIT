#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int &i : a)
		cin>>i;
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
			cout<<"Buoc "<<test<<": ";
			for(int j : a)
				cout<<j<<" ";
			cout<<endl;
			test++;
		}else
			break;
	}
	return 0;
}

