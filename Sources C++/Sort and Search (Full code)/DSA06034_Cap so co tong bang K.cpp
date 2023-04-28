#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n, k;
		cin>>n>>k;
		int a[n];
		int res = 0;
		unordered_map<int, int> count;
		for (int i=0; i<n; i++) {
			cin>>a[i]; 
		    count[a[i]]++;
		}
		for (int i=0; i<n; i++) {
		    if (count.find(k - a[i]) != count.end())
		        res += count[k - a[i]];
		    
		    if (k == 2 * a[i])
		        res--;
		}
		res /= 2;
		cout << res << endl;
	}
	return 0;
}

