#include<bits/stdc++.h>
using namespace std;

int unused[100], n, a[100];

int check(){
    for(int i=1; i<n; ++i)
        if(abs(a[i] - a[i+1]) == 1)
            return 0;
    return 1;
}

void print() {
    for(int i=1; i<=n; ++i)
        cout<<a[i];
    cout<<endl;
}

void Quay_lui_hoan_vi(int i) {
    for(int j=1; j<=n; ++j) {
        if(unused[j]) {
            a[i] = j;
            unused[j] = 0;
            if(i==n){
                if(check())
                    print();
            }else
                Quay_lui_hoan_vi(i+1);
            unused[j] = 1;
        }
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=1; i<=n; ++i){
            unused[i] = 1;
            a[i] = i;
        }
        Quay_lui_hoan_vi(1);
    }
    return 0;
}


