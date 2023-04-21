#include<iostream>
using namespace std;

int check(int *a, int n, long s){
    long cnt = 0;
    for(int i=0; i<n; ++i){
        cnt += a[i];
        if(cnt == s+a[i]-cnt)
            return i+1;
    }
    return -1;
}

int main()
{
    int t, n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        long sum = 0;
        for(int &i : a){
            cin>>i;
            sum += i;
        }
        cout<<check(a, n, sum)<<endl;
    }
    return 0;
}
