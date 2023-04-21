#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin>>n;
    int a[n][n];
    memset(a, 0, sizeof(a));
    string s, token;
    cin.ignore(1, '\n');
    for(int i=0; i<n; ++i){
        getline(cin, s);
        stringstream ss(s);
        while(ss>>token)
            a[i][stoi(token) - 1] = 1;
    }
    for(int i=0; i<n; ++i){
        for(int j=i+1; j<n; ++j)
            if(a[i][j])
                cout<<i+1<<' '<<j+1<<endl;
    }
    return 0;
}
