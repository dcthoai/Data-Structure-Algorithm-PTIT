#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> &a, pair<int, int> &b){
	if(a.first == b.first)
		return a.second > b.second;
	return a.first > b.first;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n, x, y, z;
		cin>>n;
		vector<pair<int, int>> v(n);
		for(auto &i : v)
			cin>>x>>i.second>>i.first;
		sort(v.begin(), v.end(), cmp);	//sap xep ds cong viec theo loi nhuan giam dan va dealine giam dan
		
		long long totalProfit = 0;
		int test, countWorks = 0, deadline[1005];
		memset(deadline, 0, sizeof(deadline));
		
		for(pair<int, int> i : v){
			test = i.second;
			for(int j=test; j>0; --j){
				if(deadline[j] == 0){
					countWorks++;
					totalProfit += i.first;
					deadline[j] = 1;
					break;
				}
			}
		}
		cout<<countWorks<<" "<<totalProfit<<endl;
	} 
	return 0;
}


