#include<bits/stdc++.h>
using namespace std;

int main(){
	int t, n;
	vector<int> ans;
	cin>>t;
	while(t--){
		cin>>n;
        int a[n], Max[n];
        cin>>a[0];
        Max[0] = a[0];
        for(int i=1; i<n; ++i){
            cin>>a[i];
            Max[i] = max(a[i], Max[i-1]);  // mang Max luu gia tri lon nhat cua day con 0 -> i
        }
        int Min = a[n-1];
        if(Max[n-2] <= Min)
        	ans.push_back(n-1);
        	
        for(int i = n-2; i>0; --i){
			Min = min(Min, a[i]);
			if(Max[i-1] <= Min)
				ans.push_back(i);
		}
				
		int cnt = ans.size();
		cout<<cnt<<endl;
        if(cnt)
            for(int i=cnt-1; i>=0; --i) 
				cout<<ans[i]<<' ';
        cout<<endl;
        ans.clear();
	}
	return 0;
}

