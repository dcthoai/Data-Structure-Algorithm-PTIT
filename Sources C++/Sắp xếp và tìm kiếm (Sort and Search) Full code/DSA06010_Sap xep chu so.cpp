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
        string a[n];
        for(int i=0; i<n; i++)             
            cin>>a[i];
        for(char i='0'; i<='9'; i++) {
            for(int j=0; j<n; j++) {
                if(a[j].find(i) != string::npos) {
                    cout<<i<<' ';
                    break;
                }
            }
        }
        cout<<endl;
    }
	return 0;
}

