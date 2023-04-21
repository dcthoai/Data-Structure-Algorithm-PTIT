#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main(){
	faster();
	int t;
    cin>>t;
    while(t--){
        int n, x;
        cin>>n>>x;
        long a[n], cnt = 0;
        for(int i=0; i<n; ++i){
            cin>>a[i];
            if(a[i] == x)
                ++cnt;
        }
        if(cnt > 0)
            cout<<cnt<<endl;
        else
            cout<<-1<<endl;
    }
	return 0;
}

