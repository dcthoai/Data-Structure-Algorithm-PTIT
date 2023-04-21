#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int &i : a)
            cin>>i;
        int res[n], count = 0;
        // Tim day con tang dai nhat
        for(int i=0; i<n; i++) {
            int max = 0;
            for(int j=0; j<i; j++) {
                if(a[j] <= a[i]) {
                    if(max < res[j])
                        max = res[j];
                }
            }
            res[i] = max + 1;
            count = (count < res[i]) ? res[i] : count;
        }
        // In ra so so phan tu khong thuoc day con tang dai nhat
        cout<<n-count<<endl;
    }
}
