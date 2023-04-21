#include<bits/stdc++.h>
using namespace std;

vector<string> v;

void nextCobination(int a[], string b, int n, int k) {
    while(1) {
        string s = "";
        for(int i=1; i<=k; ++i)
            s += b[a[i] - 1];
        v.push_back(s);
        int i = k;
        while(i>0 && a[i] == n-k+i)
            --i;
        if(i==0)
            return;
        ++a[i];
        for(int j = i+1; j<=k; ++j)
            a[j] = a[i] + j - i;
    }
}

int main() {
    int t, n;
    cin>>t;
    while(t--) {
        cin>>n;
        string s;
        cin>>s;
        for(int i=1; i<=s.size(); ++i){
            int b[i+1];
            for(int j=1; j<=i; ++j)
                b[j] = j;
            nextCobination(b, s, n, i);
        }
        sort(v.begin(), v.end());
        for(string i : v)
            cout<<i<<' ';
        cout<<endl;
        v.clear();
    }
    return 0;
}
