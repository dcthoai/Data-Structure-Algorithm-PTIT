#include<bits/stdc++.h>
using namespace std;

int n, k, check, sum;

void Try(int *a, int cnt = 0, int s = 0){
    if(check) 
		return;
    if(cnt == k){
        check = 1;
        return;
    }
    for(int i=0; i<n; ++i){
        if(s == sum) 
			Try(a, cnt + 1);
        else{
            if(s > sum) 
				return;
            Try(a, cnt, s + a[i]);
        }
    }
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		int a[n];
		sum = check = 0;
		for(int i=0; i<n; ++i){
			cin>>a[i];
			sum += a[i];
		}
		if(sum % k == 0){
			sum /= k;
			Try(a, 0);
			cout<<check<<endl;
		}else
			cout<<0<<endl;
	}
	return 0;
}


