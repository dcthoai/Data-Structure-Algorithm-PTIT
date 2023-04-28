#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int count(int a, int *b, int n, int *f){
    if(!a) 
		return 0;
    if(a==1) 
		return f[0];
    int *idx = upper_bound(b, b+n, a);
    int ans = (b + n) - idx + f[0] + f[1]; 
    if(a==2) 
		ans -= (f[3] + f[4]);
    if(a==3) 
		ans += f[2];
    return ans;
}

int calc(int *a, int *b, int m, int n){
    int f[5] = {0};
    sort(b, b + n);
    for(int i=0; b[i]<5 && i<n; ++i)
		++f[b[i]];
    int ans = 0;
    for(int i=0; i<m; ++i)
		ans += count(a[i], b, n, f);
    return ans;
}

int main(){
    faster();
    int t;
    cin >> t;
    while(t--){
        int m, n;
        cin >> m >> n;
        int x[m], y[n];
        for(int &i : x) 
			cin >> i;
        for(int &i : y) 
			cin >> i;
        cout << calc(x, y, m, n) << endl;
    }
    return 0;
}
