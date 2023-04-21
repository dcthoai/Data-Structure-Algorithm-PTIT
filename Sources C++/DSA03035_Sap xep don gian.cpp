#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main(){
	faster();
	int main() {
    int n;
    cin>>n;
    int a[n+5], f[n+5] = {0}, res = 0;
    for(int i=1; i<=n; ++i)
        cin>>a[i];
    for(int i = 1; i <= n; i++) {
        f[a[i]] = f[a[i] - 1] + 1;
        res = max(res, f[a[i]]);
    }
    cout << n - res;
	return 0;
}

