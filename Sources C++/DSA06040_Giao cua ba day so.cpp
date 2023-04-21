#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m, k;
        cin>>n>>m>>k;
        long long a[n], b[m], c[k];
        for(long long &i : a)
            cin>>i;
        for(long long &i : b)
            cin>>i;
        for(long long &i : c)
            cin>>i;
        int i = 0, j = 0, o = 0;
        multiset<long long> ans;
        while(i<n && j<m && o<k){
            if(a[i] == b[j] && b[j] == c[o]){
                    ans.insert(a[i]);
                    ++i;
                    ++j;
                    ++o;
            }else{
                if(a[i] < b[j])
                    ++i;
                else{
                    if(b[j] < c[o])
                        ++j;
                    else 
                        ++o;
                }
            }
        }
        if(ans.size() > 0)
            for(long long i : ans)
                cout<<i<<' ';
        else
            cout<<-1;
        cout<<endl;
    }

    return 0;
}
