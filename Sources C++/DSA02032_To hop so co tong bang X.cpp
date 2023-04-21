#include<bits/stdc++.h>
using namespace std;

vector<string> ans;
vector<int> v;
int N, K, a[35];

void print(){
    string s = "{" + to_string(v[0]);
    int n = v.size();
    for(int i=1; i<n; ++i)
    	s += " " + to_string(v[i]);
    s += "}";
    ans.push_back(s);
}

void nextNumber(int n, int k, int i){
    if(k==0){
        print();
        return;
    }
    for(int j=n; j>=i; --j){
        if(a[j] <= k){
            v.push_back(a[j]);
            nextNumber(n, k-a[j], j);
            v.pop_back();
        }
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>N>>K;
        for(int i=1; i<=N; ++i)
            cin>>a[i];
        sort(a, a+N);
        v.clear();
        nextNumber(N, K, 1);
  		if(ans.size()){
  			cout<<ans.size()<<' ';
  			for(int i=ans.size()-1; i>=0; --i)
  				cout<<ans[i]<<' ';
  			cout<<endl;
  			ans.clear();
		}else
			cout<<-1<<endl;
    }
    return 0;
}
