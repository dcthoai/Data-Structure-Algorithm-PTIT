#include<bits/stdc++.h>

using namespace std;

string s;
int unused[100], n, a[100];

void print(){
	for(int i=1; i<=n; ++i)
		cout<<s[a[i]-1];
	cout<<' ';
}

void Quay_lui_hoan_vi(int i){
	for(int j=1; j<=n; ++j){
		if(unused[j]){
			a[i] = j;
			unused[j] = 0;
			if(i==n)
				print();
			else
				Quay_lui_hoan_vi(i+1);
			unused[j] = 1;
		}
	}
}

int main() {
    int t;
    cin>>t;
    while(t--) {
        cin>>s;
        n = s.length();
        for(int i=1; i<=n; ++i){
        	unused[i] = 1;
        	a[i] = i;
    	}
        Quay_lui_hoan_vi(1);
        cout<<endl;
    }
    return 0;
}



