#include<bits/stdc++.h>
using namespace std;

int a[100], n;
string s = "";

int check(){
    for(int i=1; i<n; ++i)
        if(a[i] > a[i+1])
            return 0;
    return 1;
}

void print(){
    for(int i=1; i<=n; ++i)
        cout<<s[a[i]-1];
    cout<<endl;
}

void quay_lui_nhi_phan(int i, int x){
    for(int j=1; j<=x; ++j){
        a[i] = j;
        if(i==n){
            if(check())
                print();
        }else
            quay_lui_nhi_phan(i+1, x);      
    }
}

int main(){
    char c;
    cin>>c>>n;
    for(int i=0; i<=n; ++i)
        a[i] = 0;
    for(char i='A'; i<=c; ++i)
        s += i;
    quay_lui_nhi_phan(1, s.length());
    return 0;
}
