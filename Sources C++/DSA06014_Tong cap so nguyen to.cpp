#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int prime[1000005];

int check(int n){
    int m = n >> 1;
    for(int i=2; i<=m; ++i)
        if(!prime[i] && !prime[n-i])
            return i;
    return -1;
}

int main(){
	faster();
	prime[0] = prime[1] = 1;
	for(int j=4; j<1000005; j+=2)
		prime[j] = 1;
	for(int i=3; i<1000005; i+=2){
		if(prime[i] == 0){
			for(int j=i*2; j<1000005; j+=i)
				prime[j] = 1;
		}
	}
	int t, n;
	cin>>t;
	while(t--){
		cin>>n;
		int ans = check(n);
		if(ans > 0)
		    cout<<ans<<' '<<n-ans<<endl;
		else
		    cout<<-1<<endl;
	}
	return 0;
}

