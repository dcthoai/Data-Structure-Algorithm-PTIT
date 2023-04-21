#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main(){
	faster();
	int t, n;

		cin>>n;
		vector <int> chan, le;
		vector <int> a(n);
		for(int i=0; i<n; ++i){
			cin>>a[i];
			if(i%2==0)
				chan.push_back(a[i]);
			else
				le.push_back(a[i]);
		}
		sort(chan.begin(), chan.end());
		sort(le.begin(), le.end(), greater<int>());
		for(int i=0; i<n/2; ++i)
			cout<<chan[i]<<' '<<le[i]<<' ';
		if(n%2 != 0)
			cout<<chan.back()<<' ';
		cout<<endl;
	
	return 0;
}
