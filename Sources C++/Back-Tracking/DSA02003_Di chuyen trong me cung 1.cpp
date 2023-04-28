#include <bits/stdc++.h>
using namespace std;

int n, a[100][100], check = 0;
string s = "";

void Try(int i, int j){
    if(i==n-1 && j==n-1){
        cout<<s<<' ';
        check = 1;
        return;
    }
    if(a[i+1][j]){
        s+="D";
        Try(i+1, j);
        s.erase(s.length()-1, 1);
    }
    if(a[i][j+1]){
        s+="R";
        Try(i, j+1);
        s.erase(s.length()-1, 1);
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        check = 0;
        for(int i=0; i<n; ++i)
            for(int j=0; j<n; ++j)
                cin>>a[i][j];
        if(a[0][0] == 0)
            cout<<"-1";
        else{
            Try(0, 0);
            if(check==0)
                cout<<"-1";
        }
        cout<<endl;
    }
}
