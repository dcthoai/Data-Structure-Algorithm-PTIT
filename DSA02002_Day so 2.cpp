#include<iostream>
using namespace std;

void print(int a[], int n){
    cout<<'[';
    for(int i=0; i<n; ++i){
        if(i>0)
            cout<<' ';
        cout<<a[i];
    }
    cout<<"] ";
}

void Try(int a[], int n) {
	if(n==0)
		return;
	int b[n];
	for(int i=0; i<n-1; ++i){
		b[i] = a[i] + a[i+1];
	}
	Try(b, n-1);
	print(a, n);
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; ++i)
            cin>>a[i];
        Try(a, n);
        cout<<endl;
    }
    return 0;
}
