#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
    	int n, x, y;
        cin >> n;
        char c;
        vector<int> v;
        cin>>x>>y>>c;
        v.push_back(x);
        v.push_back(y);
        for(int i=1; i<n; ++i){
        	cin>>x>>y>>c;
        	v.push_back(y);
		}
		sort(v.begin(), v.end());
		for(int i : v)
			cout<<i<<' ';
		cout<<endl;
    }
    return 0;
}
