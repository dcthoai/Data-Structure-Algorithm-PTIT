#include <bits/stdc++.h>
using namespace std;

int main(){
	int C, n;
	cin>>C>>n;
	int f[25001], w[n+1];
	for(int i=1; i<=n; ++i)
		cin>>w[i];
	for(int i=1; i<=n; i++)
        for(int j=C; j>=w[i]; j--)
            f[j] = max(f[j], f[j-w[i]] + w[i]);
	cout<<f[C];
}
