#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int binarySearch(int *a, int l, int r, int x) {
	if(l<=r) {
	    int mid = (l+r) / 2;
	    if(a[mid] == x)
	    	return mid;
	    if(a[mid] > x)
	      	return binarySearch(a, l, mid - 1, x);
		return binarySearch(a, mid + 1, r, x);
	}
  	return 0;
}

int main(){
	faster();
	int t;
	cin>>t;
	while(t--){
		int n, k;
		cin>>n>>k;
		int a[n+1];
		for(int i=1; i<=n; ++i)
			cin>>a[i];
		int check = binarySearch(a, 1, n, k);
		if(check)
			cout<<check<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}



