#include<bits/stdc++.h>
using namespace std;

void Sinh_to_hop(int a[], int b[], int n, int k) {
    while(1) {
        for(int i=1; i<=k; ++i)
            cout<<b[a[i]]<<' ';
        cout<<endl;
        int i = k;
        while(i>0 && a[i] == n-k+i)
            --i;
        if(i==0)
            return;
        ++a[i];
        for(int j = i+1; j<=k; ++j)
            a[j] = a[i] + j - i; 
    }
}

int main()
{
    int n, k;
    cin>>n>>k;
    int b[25], a[k+1], j = 1;
    set <int> s;
    for(int i=1; i<=n; ++i){
        int x;
        cin>>x;
        s.insert(x);
    }
    for(int i : s){
        b[j] = i;
        ++j;
    }
    for(int i=1; i<=k; ++i)
        a[i] = i;
    Sinh_to_hop(a, b, j-1, k);
    return 0;
}
