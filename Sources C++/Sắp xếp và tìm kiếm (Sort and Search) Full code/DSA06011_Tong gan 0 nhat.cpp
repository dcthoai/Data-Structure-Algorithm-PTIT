#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main(){
	faster();
	int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int a[n], m = 1000000, index1, index2;
        for(int i=0; i<n; i++)
            cin>>a[i];
        for(int i=0; i<n-1; i++) 
            for(int j=i+1; j<n; j++) {
                int x = abs(a[j]+a[i]);
                if(x<m) {
                    m = x;
                    index1 = i;
                    index2 = j;
                }
            }
        cout<<a[index1]+a[index2]<<endl;
    }
	return 0;
}

