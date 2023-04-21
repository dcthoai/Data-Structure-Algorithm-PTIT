#include<bits/stdc++.h>
using namespace std;

int a[100], b[100], n, k, test = 0;

int check(){
    int sum = 0;
    for(int i=1; i<=n; ++i)
        if(a[i])
            sum+= b[i];
    if(sum==k)
        return 1;
    return 0;
}

void print(){
    cout<<'[';
    int cnt = 0;
    for(int i=1; i<=n; ++i){
        if(a[i]){
            if(cnt)
                cout<<' ';
            cnt = 1;
            cout<<b[i];
        }
    }
    cout<<']'<<' ';
    test = 1;
}

void quay_lui_nhi_phan(int i){
    for(int j=1; j>=0; --j){
        a[i] = j;
        if(i==n){
            if(check())
                print();
        }else
            quay_lui_nhi_phan(i+1);      
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>k;
        test = 0;
        for(int i=0; i<=n; ++i)
            a[i] = 0;
        for(int i=1; i<=n; ++i)
            cin>>b[i];
        sort(b+1, b+n+1);
        quay_lui_nhi_phan(1);
        if(test == 0) 
            cout<<"-1";
        cout<<endl;
    }
    return 0;
}
