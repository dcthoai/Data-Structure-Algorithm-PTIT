#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        vector<int> v[1005];
        int n, canh;
        cin>>n>>canh;
        int x, y;
        set<int> a;
        for(int i=0; i<canh; ++i){
            cin>>x>>y;
            a.insert(x);
            a.insert(y);
            v[x].push_back(y);
            v[y].push_back(x);
        }
        for(int i : a){
            cout<<i<<": ";
            for(int j : v[i])
                cout<<j<<' ';
            cout<<endl;
        }
    }
    return 0;
}    
