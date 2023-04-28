#include<bits/stdc++.h>
using namespace std;

int a[1005];

void preCombination(int n, int k){
    int i = k;
    while(a[i-1] + 1 == a[i] && i) 
		--i;
    if(i){
        --a[i];
        for(int j=i + 1; j<=k; ++j) 
			a[j] = n - k + j;
        for(int j=1; j<=k; ++j) 
			cout << a[j] << ' ';
    }
    else 
		for(int j = n-k+1; j<=n; ++j) 
			cout << j << ' ';
}

int main(){
    int t;
    cin>>t;
    while(t--){
    	int n, k;
	    cin>>n>>k;
	    for(int i=1; i<=k; ++i)
	    	cin>>a[i];
	    preCombination(n, k);
	    cout<<endl;
	}
    return 0;
}
