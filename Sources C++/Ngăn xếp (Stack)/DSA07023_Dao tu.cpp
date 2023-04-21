#include<bits/stdc++.h>
using namespace std;

string s;
vector<string> v;

int main() {
    int t;
    cin>>t;
    cin.ignore();
    while(t--) {
        getline(cin, s);
        stringstream ss(s);
        string token;
        while(ss>>token)
            v.push_back(token);
        reverse(v.begin(), v.end());
        for(string i : v)
            cout<<i<<' ';
        cout<<endl;
        v.clear();
    }
    return 0;
}
