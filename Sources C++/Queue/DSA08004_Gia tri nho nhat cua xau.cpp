#include<bits/stdc++.h>
using namespace std;

int main(){
	int t, n, a[30];
	string s;
	priority_queue<int> pq;
	cin>>t;
	while(t--){
		cin>>n>>s;
		memset(a, 0, sizeof(a));
		for(char i : s)
			a[i - 'A']++;
		
		for(int i : a)
			if(i)
				pq.push(i);
		while(n--){
			pq.push(pq.top() - 1);
			pq.pop();
		}
		long long sum = 0;
		while(pq.size()){
			sum += 1LL * pq.top() * pq.top();
			pq.pop();
		}
		cout<<sum<<endl;
	}
	return 0;
}
