#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
using namespace std;

long long mod = 1e9+7;
int n, k;

struct Matrix{
	long long matrix[15][15];
	
	Matrix operator * (Matrix a){
        Matrix ans, b = *this;
        for(int i=0; i<n; ++i){
			for(int j=0; j<n; ++j){
				ans.matrix[i][j] = 0;
				for(int k=0; k<n; ++k){
					ans.matrix[i][j] += (a.matrix[i][k] * b.matrix[k][j]) % mod; 
					ans.matrix[i][j] %= mod;
				}
			}
		}
		return ans;
    }
};

Matrix matrixPow(Matrix a, int k){
	if(k==1)
		return a;
	Matrix ans = matrixPow(a, k>>1);
	ans = ans*ans;
	if(k&1)
		ans = ans*a;
	return ans;
}

int main(){
	faster();
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		Matrix res, a;
		for(int i=0; i<n; ++i)
			for(int j=0; j<n; ++j)
				cin>>a.matrix[i][j];
		res = matrixPow(a, k);
		long long ans = 0;
		for(int i=0; i<n; ++i)
			ans = (ans + res.matrix[i][n-1]) % mod;
		cout<<ans<<endl;
	}
	return 0;
}
