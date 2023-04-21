#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        long long f[n+1];
        f[0] = f[1] = 1;
        	
        /* Khi i<=k tong so cach buoc len dinh thu i = tong so cach buoc len cac dinh ben duoi i
        f[i] = f[0] +...+ f[i-1]  va  f[i-1] = f[0] +...+ f[i-2] => f[i] = f[i-1] + f[i-1] = 2*f[i-1]	*/
        for(int i=2; i<=n; i++){
            if(i<=k) 
				f[i] = (f[i-1]*2) % mod;
            else 
				f[i] = (f[i-1]*2 - f[i-k-1] + mod) % mod;
        }
		/* Khi i>k de leo le bac thu i thi chi co the leo len tu bac thu i-k -> i-1 nen
		so cach leo len den bac thu i chính là tong so cach de leo len cac bac trong khoang
		tu i-k den i-1 suy ra f[i] = f[i-1]*2 - f[i-k-1], vi hieu co the am nen cong them mod	*/
		
        cout<<f[n]<<endl;
    }
	return 0;
}
