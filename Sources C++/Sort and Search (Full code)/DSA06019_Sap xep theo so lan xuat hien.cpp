#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> &a, pair<int, int> &b){
    if(a.second == b.second)
        return a.first < b.first;
    return a.second > b.second;
}

int main()
{
    int t, n, x;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n], res[100005];
        vector <pair<int, int>> v;
        for(int &i : a){
            cin>>i;
            res[i]++;
        }
        for(int i : a){
            if(res[i]){
                v.push_back({i, res[i]});
                res[i] = 0;
            }
        }
        sort(v.begin(), v.end(), cmp);
        for(auto i : v)
            for(int j=0; j<i.second; ++j)
                cout<<i.first<<' ';
        cout<<endl;
    }
    return 0;
}
