#include<bits/stdc++.h>
using namespace std;

int n, m, a[105][105], cnt = 0;

void Try(int i, int j){
    if(i==n-1 && j==m-1){
		++cnt;
        return;
    }
    if(i<n-1)
    	Try(i+1, j);
    if(j<m-1)
    	Try(i, j+1);
}

int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>m;
		cnt = 0;
		for(int i=0; i<n; ++i)
			for(int j=0; j<m; ++j)
				cin>>a[i][j];
		Try(0,0);
		cout<<cnt<<endl;
	}
	return 0;
}


