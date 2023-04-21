#include<iostream>
using namespace std;

int n, k, cnt = 0, a[105];
long long ans = 0;

void Try(int i){
    for(int j = i + 1; j <= n; ++j){
        if(a[j] > a[i]){
            ++cnt;
            if(cnt == k) 
				++ans;
            Try(j);
            --cnt;
        }
    }
}

int main(){
    cin >> n >> k;
    for(int i = 1; i <= n; ++i) 
		cin >> a[i];
    Try(0);
    cout << ans;
    return 0;
}
