#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n, canh;
        cin>>n>>canh;
        vector<set<int>> v(n+1);
        int x, y;
        for(int i=0; i<canh; ++i){
            cin>>x>>y;
            v[x].insert(y);
        }
        for(int i=1; i<=n; ++i){
            cout<<i<<": ";
            for(int j : v[i])
                cout<<j<<' ';
            cout<<endl;
        }
    }
    return 0;
}    
