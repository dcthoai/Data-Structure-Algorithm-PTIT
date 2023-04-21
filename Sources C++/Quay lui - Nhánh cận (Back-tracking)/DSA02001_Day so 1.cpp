#include<iostream>
using namespace std;

void print(int a[], int n){
    cout<<'[';
    for(int i=0; i<n; ++i){
        if(i>0)
            cout<<' ';
        cout<<a[i];
    }
    cout<<"]"<<endl;
}

void Try(int a[], int b[], int n){
    if(n==0)
        return;
    print(a, n);
    for(int i=0; i<n-1; ++i)
        a[i] = b[i] + b[i+1];
    Try(a, b, n-1);
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n+1];
        for(int i=0; i<n; ++i)
            cin>>a[i];
        Try(a, a, n);
    }
    return 0;
}
