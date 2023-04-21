#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main(){
	faster();
	int t, n, m, k;
	cin>>t;
	while(t--){
		cin>>n>>m>>k;
		int a[n], b[m], c[k];
		for(int &i : a)
			cin>>i;
		for(int &i : b)
			cin>>i;
		for(int &i : c)
			cin>>i;
		int i=0, j=0, l=0, test = 0;
		while(1){
			if(a[i]==b[j] && a[i]==c[l]){
				cout<<a[i]<<' ';
				test = 1;
				++i;
				++j;
				++l;
			}else{
				if(a[i]<b[j] && a[i]<c[l])
					++i;
				else{
					if(b[j] < c[l])
						++j;
					else
						++l;
				}
			}
			if(i==n || j==m || l==k)
				break;
		}
		if(test==0)
			cout<<"NO";
		cout<<endl;
	}
	return 0;
}

