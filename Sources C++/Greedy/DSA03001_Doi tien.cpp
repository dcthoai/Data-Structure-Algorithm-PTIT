#include<iostream>
using namespace std;

int cnt = 0, a[11] = {0, 1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};

void Try(int n, int i){
    while(n>=a[i]){
        cnt++;
        n-=a[i];
    }
    if(n==0)
        cout<<cnt<<endl;
    else
        Try(n, i-1);
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cnt = 0;
        Try(n, 10);
    }
    return 0;
}
