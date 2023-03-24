#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main() {
	faster();
    int t;
    cin>>t;
    while(t--){
        string a, b;
        cin>>a>>b;
        int n = a.size(), m = b.size();
		int res[n+1][m+1];
		for(int i = 0; i <= m; ++i) res[0][i] = 0;
        for(int i = 0; i <= n; ++i) res[i][0] = 0;
        for(int i=0; i<n; ++i){
            for(int j=0; j<m; ++j){
                if(a[i] == b[j]) 
					res[i+1][j+1] = res[i][j] + 1;
                else 
					res[i+1][j+1] = (res[i][j+1] > res[i+1][j]) ? res[i][j+1] : res[i+1][j];
            }
        }
        cout<<res[n][m]<<endl;
    }
    return 0;
}

//		Dung quy hoach dong: Xau con dai nhat cua a, b co do dai n va m. 
//		Quy ve bai toan con 2 xau co do dai i, j:   d[i][j] = k (do dai xau con chung = k)
//		3 th:
//			Neu ky tu cuoi cua xau a' co trong xau chung 	  			->  d[i][j] = d[i-1][j] + 1
//			Neu ky tu cuoi cua xau b' co trong xau chung 	  			->  d[i][j] = d[i][j-1] + 1
//			Ky tu cuoi cua 2 xau cung co trong xau chung a[i] = b[j]    ->  d[i][j] = d[i-1][j-1] + 1
