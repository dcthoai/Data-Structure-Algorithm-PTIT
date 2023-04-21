#include <iostream>
#include <string>
using namespace std;

void Sinh_hoan_vi(string a, int n){
	int j = n-1;
	while(j>=0 && a[j] >= a[j+1])
		--j;
	if(j<0){
		cout<<" BIGGEST"<<endl;
		return;
	}	
	int i = n-1;
	while(a[j] >= a[i])
		--i;
	swap(a[i], a[j]);
	int l = j+1, r = n-1;
	while(l<r){
		swap(a[l], a[r]);
		++l;
		--r;
	}
	cout<<" "<<a<<endl;
}

int main() {
    int t;
    cin>>t;
    while(t--){
    	int n;
    	string s;
	    cin>>n>>s;
	    cout<<n;
	    Sinh_hoan_vi(s, s.size());
	}
    return 0;
}
