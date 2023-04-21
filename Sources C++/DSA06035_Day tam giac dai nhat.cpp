#include<bits/stdc++.h>
using namespace std;

void check(int *a, int n){
	int count, ans = 0, i = 1;
	while(i<n){
		count = 1;
		while(a[i] > a[i-1] && i<n){ //dem nua trai day tam giac (tang dan)
			++i;
			++count;
		}
		while(a[i] < a[i-1] && i<n){ //dem nua phai day tam giac (giam dan)
			++i;
			++count;
		}
		while(a[i] == a[i-1] && i<n) //bo qua day so bang nhau
		    ++i;
		ans = max(ans, count);
	}
	cout<<ans<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0; i<n; ++i)
			cin>>a[i];
		check(a, n);
	}
	return 0;
}
